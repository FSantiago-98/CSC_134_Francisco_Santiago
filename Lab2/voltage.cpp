//@author: Francisco Santiago
//@date: 9/1/25
//@purpose: Calculate the voltage given current and resistance

//include iostream directive
#include <iostream>

//use namespace standard
using namespace std;

//define the main() function
int main()
{
  int current = 10;
  int resistance = 2;
  int voltage = current * resistance;

  //use std output for the console and print the result for voltage
  cout << voltage << endl;

  return 0;
}
