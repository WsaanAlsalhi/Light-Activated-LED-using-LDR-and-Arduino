// Define pins
int ldrPin = A0;    // Pin connected to LDR (analog input)
int ledPin = 13;    // Pin connected to LED

void setup() {
  pinMode(ldrPin, INPUT);   // Set LDR as input
  pinMode(ledPin, OUTPUT);  // Set LED as output
}

void loop() {
  // Read the value from LDR
  int ldrValue = analogRead(ldrPin);
  
  // If LDR value is low (room is dark)
  if (ldrValue < 512) {  // Threshold around half the range
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }

  delay(100); // Small delay between readings
}
