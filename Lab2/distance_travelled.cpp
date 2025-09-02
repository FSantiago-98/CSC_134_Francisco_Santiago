//author: Francisco Santiago
//@date: 8/31/25
//@purpose: Calculate the distance travelled using velocity and time

//include iostream directive
#include <iostream>

//use standard namespace
using namespace std;

//define the main() function
int main()
{
  int velocity = 80;
  int time = 2;
  int distance = velocity * time;

  //use the std output for the console and print the distance travelled
  cout << distance << endl;

  return 0;
}
