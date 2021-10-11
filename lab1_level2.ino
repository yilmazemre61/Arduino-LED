// C++ code
// Emre YILMAZ
// 29th May 2021
int blueLED = 13; // the blueLED set to 13
int dot = 100; // assign the value 100 to the 'dot'
int dash = 1000; // assign the value 1000 to the 'dash'
int offTime = 1000; // the delay time
void setup()
{
  pinMode(blueLED, OUTPUT);
}

void loop()
{
  delay(1000); // delay for the start - it isn't part of the code
  // Letter E - It consist of one 'dot'
  // dot
  digitalWrite(blueLED, HIGH);
  delay(dot); // Waits for 0.1 sec
  digitalWrite(blueLED, LOW);
  delay(offTime); // Waits for 1 sec
  // Letter Y - It consist of 'one dash - one dot - one dash - one dash'
  delay(1000); // to demonstrate the code more clearly - it isn't part of the code
  // 'dash'
  digitalWrite(blueLED, HIGH);
  delay(dash); // Waits for 1 sec
  digitalWrite(blueLED, LOW);
  delay(offTime); // Waits for 1 sec
  // 'dot'
  digitalWrite(blueLED, HIGH);
  delay(dot); // Waits for 0.1 sec
  digitalWrite(blueLED, LOW);
  delay(offTime); // Waits for 1 sec
  // 'dash'
  digitalWrite(blueLED, HIGH);
  delay(dash); // Waits for 1 sec
  digitalWrite(blueLED, LOW);
  delay(offTime); // Waits for 1 sec
  // 'dash'
  digitalWrite(blueLED, HIGH);
  delay(dash); // Waits for 1 sec
  digitalWrite(blueLED, LOW);
  delay(offTime); // Waits for 1 sec
  // to execute the code - it isn't part of the code
  delay(100000000);
}
