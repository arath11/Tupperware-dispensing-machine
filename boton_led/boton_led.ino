const int BUTTON = 4; //Naming sitch button pin 
const int LED = 0; // Namin led pin
int BUTTONstate = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}


void loop() {
  BUTTONstate = digitalRead(BUTTON);//le el estatus del boton, entrada
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else 
  {
    digitalWrite(LED, LOW);
  }
}
