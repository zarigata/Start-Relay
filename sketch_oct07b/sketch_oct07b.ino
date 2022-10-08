#include <ESP8266WiFi.h>
int RELAY = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RELAY,OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(RELAY, HIGH);
  delay (5000);
  digitalWrite(RELAY,LOW);
   digitalWrite(LED_BUILTIN, LOW); 
}

void loop() {
  // put your main code here, to run repeatedly:

}
