//@author: Francisco Santiago
//@date: 9/9/25
//@purpose: calculate and print the average of three values to the console

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main function
int main()
{
    //use double variables to define the three values and average
    double num1, num2, num3, average;

    //use cout to prompt user to enter three values
    cout << "Enter three values to calculate the average: " << endl;

    //use cin to retrieve the three values from the input
    cin >> num1 >> num2 >> num3;

    //use math operators to calculate average of the values
    average = (num1 + num2 + num3) / 3;

    // print result to console
    cout << "The average of your three numbers is: " << average << endl;
}