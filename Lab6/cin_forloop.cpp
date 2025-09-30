//@author: Francisco Santiago
//@date: 9/28/25
//@purpose: use cin to receive input from user and then use a for loop to iterate and print out up until the input

//include the iostream directive
#include <iostream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
  int num = 0;  //initialize the variable num with 0
  int userNum; //define a variable for user input

  cout << "Please enter an integer value: " << endl; //print a string asking user to input an integer value
  cin >> userNum; //use cin to assign user input to variable num

  //use a for loop to iterate until num is equal to userNum
  for (num = 0; num <= userNum; num++){
  cout << num << endl;
}

return 0;

}
