//@author: Francisco Santiago
//@date: 11/1/25
//@purpose: fine the maximum value in an array

//include directives
#include <iostream>

//use namespace standard
using namespace std;

//define the main function
int main()
{
    //declare variables
    const int ArraySize = 6;
    int numbers[ArraySize];
    int maxNum;

    //prompt user to input 5 integer values
    cout << "Please enter 6 integer values: " << endl;
    
    //for loop to take user values into array
    for (int i = 0; i < ArraySize; i++)
    {
        cin >> numbers[i];
    }

    //use first element for maxNum variable
    maxNum = numbers[0];

    //use for loop and if statement to find highest value in array
    for (int i = 0; i < ArraySize; i++)
    {
        if (numbers[i] > maxNum)
        {
            maxNum = numbers[i];
        }
    }
    //print the highest value
    cout << "The maximum value is: " << maxNum << endl;

    return 0;
}