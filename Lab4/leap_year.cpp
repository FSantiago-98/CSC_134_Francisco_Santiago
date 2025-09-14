//@author: Francisco Santiago
//@date: 9/14/25
//@description: This program checks if a given year is a leap year or not.

//include iostreamn directive
#include <iostream>

//using the namespace standard
using namespace std;

//define the main function
int main()
{
    //define a variable to hold the year
    int year;

    //use cout to prompt user to input a year
    cout << "Enter a year: " << endl;

    //use cin to get the year from the user
    cin >> year;

    //use if/else statements to determine if leap year or not
    if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        cout << "The year you entered, " << year << ", is a leap year!" << endl;
    }
    else{
        cout << "The year you entered, " << year << ", is not a leap year!" << endl;
    }
}

