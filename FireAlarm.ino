#define BLYNK_TEMPLATE_ID "Template ID"
#define BLYNK_TEMPLATE_NAME "Template Name"
#define BLYNK_AUTH_TOKEN "Blynk Auth Toekn"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Blynk-Auth-Token";  // Replace with your Blynk authentication token
char ssid[] = "Wifi-SSID";       // Replace with your WiFi SSID
char pass[] = "Wifi-Password";   // Replace with your WiFi password

#define FLAME_SENSOR_PIN D0
#define GREEN_LED_PIN D2
#define RED_LED_PIN D1

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(FLAME_SENSOR_PIN, INPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
}

void loop() {
  Blynk.run();

  int flameSensorValue = digitalRead(FLAME_SENSOR_PIN);

  if (flameSensorValue == LOW) {  // Fire detected
    digitalWrite(GREEN_LED_PIN, LOW); //Turn off thr green LED
    digitalWrite(RED_LED_PIN, HIGH);//Turn on the red LED
    
    Blynk.virtualWrite(V1, 0); // Turn off green LED in Blynk
    Blynk.virtualWrite(V2, 255); // Turn on red LED in Blynk
  } else {  // No fire detected
    digitalWrite(GREEN_LED_PIN, HIGH);// Keep the green LED  on
    digitalWrite(RED_LED_PIN, LOW); // Keep the red LED off
    
    Blynk.virtualWrite(V1, 255); // Turn on green LED in Blynk
    Blynk.virtualWrite(V2, 0); // Turn off red LED in Blynk
  }
}
