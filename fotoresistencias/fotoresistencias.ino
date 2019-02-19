const int LDR = A0; //Defining LDR PIN

int input_val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  input_val = analogRead(LDR); //Reading Input
  Serial.print("LDR is: ");
  Serial.println(input_val);
  delay(1000);

}
