  // Button is on pin 7
  int button = 7;

void setup() {                
  // initialize serial communication at a speed of 9600 bits per second:
  Serial.begin(9600);
  // initialize the digital pins as outputs.
  for(int led = 9; led < 14; led++) {
    pinMode(led, OUTPUT);
  } 
  
  // set the button pin as an input
  pinMode(button, INPUT);
  // enable the internal pull up resistor
  digitalWrite(button, HIGH);
}
  

// the loop routine runs over and over again forever:
void loop() {
  int time = analogRead(0);
  Serial.print("Analog reading: ");
  Serial.println(time);
  delay(500);               // wait for half second
  
  int buttonReading = digitalRead(button);
 
  if(buttonReading == 1) { // If the button is not pressed
    // Do a sequence
    for(int led = 9; led < 14; led = led + 1) {
      digitalWrite(led, HIGH);
      delay(time);
      digitalWrite(led, LOW);
    }
  }
  
  if(buttonReading == 0) {
    for(int led = 13; led > 8; led = led - 1) {
      digitalWrite(led, HIGH);
      delay(time);
      digitalWrite(led, LOW);
    }
  }
}
