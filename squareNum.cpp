//@author: Francisco Santiago
//@date: 11/19/25
//@purpose: use functions to square a number and display it from the main function

//include directive
#include <iostream>
#include <cmath>

//use the namespace standard
using namespace std;

//define the function for squaring a number
int squareNumber(int num1){
  return pow(num1, 2);
}

//define the main function
int main(){
  //define variables
  int num = 0
  int result = 0

  //prompt user to enter an integer value
  cout << "Please enter an integr value: \n"
  cin >> num; //retrieve number entered and assign it to num
  result = squareNumber(num);
  cout << "The square of " << num << " is " << result << endl;
  return 0;
}

  
  
