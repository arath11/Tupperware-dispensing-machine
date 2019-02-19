#include <Servo.h> //Libreria de servo

Servo servo; //nombre del servo, con minuscula para qu elo permita
//Naranja señal, rojo positivo, cafe negativo 

void setup() {
  servo.attach(D0); //el pin en el que se encuentra 
}

void loop() {
 //Aqui sera la posicion inicial 
 servo.write(0);
 delay(10000);
 //Aqui sera la segunda posicion

 servo.write(70);
 delay(3000);

}
