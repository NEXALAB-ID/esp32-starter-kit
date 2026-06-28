// NOTE: This example uses a public MQTT broker (broker.hivemq.com) for testing purposes only.
// Public brokers are not secure — anyone can publish or subscribe to the same topic.
// For production use, set up your own private broker (e.g., Mosquitto).

#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid       = "YOUR_SSID";
const char* password   = "YOUR_PASSWORD";
const char* mqtt_server = "broker.hivemq.com";
const int   mqtt_port   = 1883;
const char* topic       = "nexalab/test";

WiFiClient espClient;
PubSubClient client(espClient);

void connectWiFi() {
  Serial.print("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" Connected!");
}

void connectMQTT() {
  while (!client.connected()) {
    Serial.print("Connecting to MQTT...");
    if (client.connect("ESP32Client")) {
      Serial.println(" Connected!");
    } else {
      Serial.print(" Failed, rc=");
      Serial.println(client.state());
      delay(2000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  connectWiFi();
  client.setServer(mqtt_server, mqtt_port);
}

void loop() {
  if (!client.connected()) connectMQTT();
  client.loop();

  String message = "Hello from ESP32!";
  client.publish(topic, message.c_str());
  Serial.println("Message published: " + message);

  delay(5000);
}
