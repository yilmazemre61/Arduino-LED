// C++ code
// Emre YILMAZ
// 29th May 2021
int blueLED = 13; // the blueLED set to 13
int count = 0; // to test the 'while' loop
int shortDelay = 100;
int longDelay = 1000;
void setup()
{
	pinMode(blueLED, OUTPUT); // setting up the pin
}

void loop()
{
  while(count<3){ // when it runs the 'while' loop 3 times it will execute
  digitalWrite(blueLED, HIGH); // it will turn on the LED 
  delay(longDelay); // Waits for 1 sec
  digitalWrite(blueLED, LOW); // it will turn off the LED 
  delay(longDelay); // Waits for 1 sec
  count++; // it will increase the count variable
  }
  
  while(count<6){ // when it runs the 'while' loop 3 times it will execute 
  digitalWrite(blueLED, HIGH); // it will turn on the LED
  delay(shortDelay); // Waits for 0.1 sec
  digitalWrite(blueLED, LOW); // it will turn off the LED
  delay(shortDelay); // Waits for 0.1 sec
  count++; // it will increase the count variable 
  }
 
}