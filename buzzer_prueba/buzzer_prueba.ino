const int buzzer = 2; //D4

void setup() {
  pinMode(buzzer, OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzer, HIGH);
  delay(200);
  digitalWrite(buzzer, LOW);
  delay(200);
}
