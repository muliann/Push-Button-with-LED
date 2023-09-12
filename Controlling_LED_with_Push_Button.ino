int buttonPin = 5; // Push Button Pin
int ledPin = 19; // LED pin
int buttonState = 0; // variable for reading the pushbutton status

void setup() {
  Serial.begin(115200); // initialize serial monitor at a baud rate of 115200
  pinMode(ledPin, OUTPUT); // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);  // initialize the pushbutton pin as an input
}

void loop() {
buttonState = digitalRead(buttonPin);// Reading the push button state value
 
 // check if the pushbutton is pressed. If it is, the button isn't Pressed(HIGH), the LED is off(LOW)
 if (buttonState == HIGH) { 
    // turn LED off:
    digitalWrite(ledPin, LOW);
 } else {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
 }
}
