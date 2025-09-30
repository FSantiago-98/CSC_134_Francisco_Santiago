//@author: Francisco Santiago
//@date: 9/28/25
//@purpose: use a for loop to print out 0-100 and their squares

//include the iostream directive
#include <iostream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
  //initialize two variables for 0 and 100
  int minNum = 0; 
  int maxNum = 100;
  
  //basic formatting for forloop results
  cout << "Number Number Squared" << endl; 
  cout << "---------------------" << endl;
  
  //use a for loop to iterate from 0 to 100 and print out the minNum and their square
  for (minNum = 0; minNum <= maxNum; minNum++){
  cout << minNum << "\t\t" << minNum * minNum << endl;
}

return 0;
  
}
