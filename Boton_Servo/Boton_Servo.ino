#<Servo.h> //libreria de servo y la posicion del boton
Servo servo;
  int boton = 0;
  int bot:

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT);
  servo.attach(4); //  
 

}

void loop() {// si lo presionamos el se tendria que mover
  bot = digitalRead(boton);
  Serial.println(bot);
if (bot == 1){
  servo.write(90); //esto le llevaria a la mitad
  delay(200); //algo de delay nunca es malo
}
else{ //Lo que pasa si no es presionado se queda en la posicion original
  servo.write(0);
  delay(200);
}
  

}
