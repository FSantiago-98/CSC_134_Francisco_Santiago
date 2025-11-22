//@author: Francisco Santiago
//@date:11/19/25
//@purpose: use functions to calculate an average

//include directives
#include <iostream>

//use the namespace standard
using namespace std;

//define the function to calculate average
double averageValues(double num1, double num2, double num3){
  return (num1 + num2 + num3) / 3;
}

//define the main function
int main(){
  //declare variables
  double val1 = 0;
  double val2 = 0;
  double val3 = 0;
  double total = 0;

  //prompt user to enter three values
  cout << "Please enter three values to calculate the average: ";
  cin >> val1 >> val2 >> val3;

  //calculate average using the averageValues function
  total = averageValues(val1, val2, val3);

  //display the average
  cout << "The average is " << total << endl;
  return 0;
}
  
