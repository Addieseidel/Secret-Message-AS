const int buttonPin = 4;     // the number of the pushbutton pin
const int ledPin =  12;      // the number of the LED pin
const int delay_value = 1000;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) { 
    for (int i = 0; i < 1000; i++) {
    // turn LED on:
digitalWrite(ledPin, HIGH);
  delay(delay_value);
  digitalWrite(ledPin, LOW);
  delay(delay_value);

  
    }
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
