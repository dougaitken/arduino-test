void setup() {                

  for(int pin = 8; pin <11; pin = pin +1)
  {
  pinMode(pin, OUTPUT);
  }
}
 
// the loop routine runs over and over again forever:
void loop() {
  
  for(int pin = 8; pin <11; pin = pin +1)
  {
   
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for a second
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for 500milli seconds (1 second)

}
}
