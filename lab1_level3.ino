// C++ code
// Emre YILMAZ
// 29th May 2021
int blueLED = 13; // the bluLED set to 13
int redLED = 12;  // the redLED set to 12
int shortDelay = 50;
int longDelay = 100;
void setup()
{
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop()
{
  digitalWrite(blueLED, HIGH);
  delay(longDelay); // Waits for 0.1 sec
  digitalWrite(blueLED, LOW);
  delay(shortDelay); // Wait for 0.05 sec
  digitalWrite(redLED, HIGH);
  delay(longDelay); // Waits for 0.1 sec
  digitalWrite(redLED, LOW);
  delay(shortDelay);  // Waits for 0.05 sec         
}