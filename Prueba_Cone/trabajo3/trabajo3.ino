#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h> //Libreria de servo

Servo servo;//nombre del servo, con minuscula para qu elo permita
int foto = 0; //valor inicial fotoresistenica
const int LDR = A0; //Defining LDR PIN
const int buzzer = 2; //D4 posicion buzzer 
const int LED = D1; //Assigning Pin 4 as the name LED
int blue = 0;
int ledPin= 13;
int state=0;

//Autorizacion y Contraseña
char auth[] = "46bd5511d8604cc2910b6bf22c373835";
char ssid[] = "GABO";
char pass[] = "holaamigo";


void setup() {
  // Debug console
  Serial.begin(9600);
  servo.attach(15); //el pin en el que se encuentra 
  pinMode(buzzer, OUTPUT);
  pinMode (LED, OUTPUT); //Declaring LED pin as an output
  
  Blynk.begin(auth, ssid, pass);
}
void loop(){
if (Serial.available()>0)
{ 
state=Serial.read();
blue=0;
}
if (state==0){
  digitalWrite(ledPin,LOW); 
  if (blue==0){
    Serial.println("LED: off");
    blue=1;
  }
}
else if {state==1);{
  digitalWrite(ledPin, HIGH);
}
void loop() 
 {
  Blynk.run();
  servo.write(0); 
  digitalWrite (LED, HIGH);
  foto = analogRead(LDR); //Nivel fotoresistencia
  Serial.print("LDR is: ");
  Serial.println(foto);
  if (foto>70)
  {
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);  
    digitalWrite (LED, LOW);
  }
}
BLYNK_WRITE(V2)
{
  Serial.print("Activando Servo");
  servo.write(70);
  delay(2000);
  servo.write(0);
}  
