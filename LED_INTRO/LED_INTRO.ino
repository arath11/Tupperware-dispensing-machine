const int LED = D1; //Assigning Pin 4 as the name LED
void setup() 
{
  pinMode (LED, OUTPUT); //Declaring LED pin as an output

}

void loop() 
{
  digitalWrite (LED, HIGH);     //Making LED HIGH
  delay(1000);            //Some delay
  digitalWrite (LED, LOW);      //Making LED LOW
  delay(1000);            //Some delay

}
