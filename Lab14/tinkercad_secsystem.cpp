/*
@author: Francisco Santiago
@Date: 12/3/25
@Purpose: simple security system that checks the password from keypad
*/
#include <Keypad.h>
int ledRed = 2; //this is the red LED pin
int failDelay = 0;
int successDelay = 0;
int ledGreen = 4; //this is the green LED pin
const byte ROWS = 4; //this is the number of rows
const byte COLS = 4; //this is the number of columns
char keyPadEntries[5]; //array that stores pressed numbers on keypad
int keyEntry = 0;
char correctCode[5] = {'1', '2', '3','4', '5'}; //array that stores  the correct passcode numbers
char keys[ROWS][COLS] = {{'1', '2', '3', 'A'},
						 {'4', '5', '6', 'B'},
						 {'7', '8', '9', 'C'},
						 {'*', '0', '#', 'D'}};


byte rowPins[ROWS] = {13, 12, 11, 10}; //keypad rows
byte colPins[COLS] = {9, 8, 7, 6}; //keypad cols

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

//executes when the arduino starts up
void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
  Serial.begin(9600);
  
}
//function to check the entered code
void checkPasskey(){
    bool correct = true;
    for (int i = 0; i < 5; i++){ //for loop to check if the pressed key matches the correct code
      if (keyPadEntries[i] != correctCode[i]){
        correct = false;
      }
    }
  if (correct){ //if/else statement to turn on the correct LED and print the correct message
    Serial.println("Access granted.");
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
  }
  else{
    Serial.println("Access denied.");
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
  }
  	delay(300); //delay that leaves the led light on for three seconds
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, LOW);
}

//infinite loop
void loop()
{
  char key = keypad.getKey();
  
  //if a key was pressed
  if (key){ //if statement that prints pressed key to console
     Serial.println("Pressed:");
   	 Serial.println(key);
     keyPadEntries[keyEntry] = key;
     keyEntry++;
    
    if (keyEntry == 5){
      checkPasskey(); //calls the checkpasskey function
      keyEntry = 0;
	}
 
  }
}