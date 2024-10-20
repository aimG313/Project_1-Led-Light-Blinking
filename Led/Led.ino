// Define the pin where the LED is connected
int ledPin = 8; // Activate LED on pin 8

void setup()
{
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  // Wait for a second
  delay(1000);
  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
}
