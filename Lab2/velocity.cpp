//@author: Francisco Santiago
//@date: 8/31/25
//@purpose: Determine the velocity using time and distance

//include iostream directive
#include <iostream>

//use standard namespace
using namespace std;

//define the main() function
int main()
{
  int time = 4;
  int distance = 400;
  int velocity = distance / time;

  //use std cout for the console and print the velocity
  cout << velocity << endl;

  return 0;
} 
