//@author: Francisco Santiago 
//@date: 11/19/25
//@purpose: use a function to display a message to the console

//include directives
#incude <iostream>

//use namespace standard
using namespace std;

//define a function
void displayWelcome(){
  //display strings to the console
  cout << "==============================\n";
  cout << "C++ Function Demonstration\n";
  cout << "==============================\n";
  return;
  }

//define the main function
int main(){
  cout << "Im in main.\n"; //Prints out a string that clarifies we are in the main function
  displayWelcome() //calls the displayWelcome function and displays the strings in it
  cout << "Im back in main>\n"; //clarifies we are back in main after calling displayWelcome
return 0;
