// Constants
const int pResistor = A0; // Photoresistor at Arduino analog pin A0
const int ledPin = 13;    // LED pin at Arduino pin 13

// Variables
int value;                 // Store value from photoresistor (0-1023)

void setup() {
  pinMode(ledPin, OUTPUT);  // Set ledPin - 13 pin as an output
  pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
}

void loop() {
  value = analogRead(pResistor);

  // You can adjust the threshold value based on your LDR characteristics
  if (value > 500) {
    digitalWrite(ledPin, LOW);  // Turn LED off
  } else {
    digitalWrite(ledPin, HIGH); // Turn LED on
  }

  delay(500); // Small delay
}
