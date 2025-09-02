//@author: Francisco Santiago
//@date: 9/1/25
//@purpose: calculate the force given mass and acceleration

//include iostream directive
#include <iostream>

//use standard namespace
using namespace std;

//define the main() function
int main()
{
  int mass = 10;
  float acceleration = 9.81;
  float force = mass * acceleration;

//use std output for the console and print the result for force
cout << force << endl;

return 0;
}
