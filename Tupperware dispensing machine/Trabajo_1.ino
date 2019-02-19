#include <Servo.h> //Libreria de servo
const int BUTTON = 0; //D3 
int BUTTONstate = 0; //button apagado
Servo servo;//nombre del servo, con minuscula para qu elo permita
int foto = 0; //valor inicial fotoresistenica
const int LDR = A0; //Defining LDR PIN
const int buzzer = 2; //D4 posicion buzzer 
const int LED = D1; //Assigning Pin 4 as the name LED


void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);//Entrada button 
  servo.attach(D0); //el pin en el que se encuentra 
  pinMode(buzzer, OUTPUT);
  pinMode (LED, OUTPUT); //Declaring LED pin as an output
}


void loop() { 
  servo.write(0); //Posicion inicial servo
  foto = analogRead(LDR); //Nivel fotoresistencia
  digitalWrite (LED, HIGH);
  BUTTONstate = digitalRead(BUTTON);//le el estatus del boton, entrada
  if (BUTTONstate == HIGH)
  {
    servo.write(70);
    digitalWrite (LED, LOW);     //Making LED HIGH
    delay(1000);            //Some delay
    digitalWrite (LED, HIGH);      //Making LED   

  }
  else 
  {
    servo.write(0);
  }

  if (foto>80)
  {
    Serial.print("LDR is: ");
    Serial.println(foto);
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
  }
  
  
}
