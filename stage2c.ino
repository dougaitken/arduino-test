void setup() {                
  // initialize serial communication at a speed of 9600 bits per second:
  Serial.begin(9600);
}
 
void loop() {
  int reading = analogRead(0);
  Serial.print("Analog reading: ");
  Serial.println(reading);
  delay(500);               // wait for half second
}
