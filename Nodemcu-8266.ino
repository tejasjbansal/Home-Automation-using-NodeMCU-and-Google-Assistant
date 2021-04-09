#include <SPI.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>


char auth[] = "Authorization Code";


char ssid[] = "Wifi SSID";
char pass[] = "Password";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
  
}
