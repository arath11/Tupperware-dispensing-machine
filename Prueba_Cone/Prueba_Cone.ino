#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


#include <Servo.h> //Libreria de servo

Servo servo;
char auth[] = "cb7f739a1ad844af91f548edb0099af0";
char ssid[] = "INFINITUM4346_2.4";
char pass[] = "1797217125";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  servo.attach(15); //D8 pin
}

void loop()
{
  Blynk.run();
  servo.write(0); 
}

BLYNK_WRITE(V1)
{
  servo.write(param.asInt());
}

BLYNK_WRITE(V2)
{
  servo.write(70);
  delay(2000);
  servo.write(0);
}
