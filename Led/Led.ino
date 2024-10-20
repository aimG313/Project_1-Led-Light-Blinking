// Define the pin where the LED is connected
int ledPin = 7; // Activate LED on pin 7
float delay_time = 500;

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
  delay(delay_time);
  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(delay_time);
}

