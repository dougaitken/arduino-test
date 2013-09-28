void setup() {                

  for(int pin = 8; pin <11; pin = pin +1)
  {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  }
}
 
// the loop routine runs over and over again forever:
void loop() {
  
  // for(int pin = 8; pin <11; pin = pin +1)
  
  {
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(500);
  }
}
