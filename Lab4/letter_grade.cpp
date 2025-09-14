//@author: Francisco Santiago
//@date: 9/9/25
//@purpose: calculate the letter grade based on the average of three values

// include the iostream directive
#include <iostream>

// use the standard namespace
using namespace std;

// define the main function
int main()
{
    // use double variables to define the three values and average
    double num1, num2, num3, average;

    // use cout to prompt user to enter three values
    cout << "Enter three values to calculate the average: " << endl;

    // use cin to retrieve the three values from the input
    cin >> num1 >> num2 >> num3;

    // use math operators to calculate average of the values
    average = (num1 + num2 + num3) / 3;

     // print result to console
    cout << "The average of your three numbers is: " << average << endl;

    // use an if/else statemment to determine the letter grade of the average
    if (average <= 100 && average >= 90)
    {
        cout << "Your letter grade is an A!" << endl;
    }
    else if (average < 90 && average >= 80)
    {
        cout << "Your letter grade is a B!" << endl;
    }
    else if (average < 80 && average >= 70)
    {
        cout << "Your letter grade is a C!" << endl;
    }
    else if (average < 70 && average >= 60)
    {
        cout << "Your letter grade is a D!" << endl;
    }
    else if (average < 60){
        cout << "Your letter grade is an F!" << endl;
    }
   
    return 0;
}
