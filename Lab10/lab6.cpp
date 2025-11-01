//@author: Francisco Santiago
//@date: 11/1/25
//@purpose: reverse elements in an array

//include directives
#include <iostream>

//use namespace standard
using namespace std;

//define the function
int main()
{
    //define variables
    const int ArraySize = 6;
    int numbers[ArraySize];

    //prompt user to input 6 integers
    cout << "Please enter 6 integers: " << endl;

    //for loop to assign input to array
    for (int i = 0; i < ArraySize; i++)
    {
        cin >> numbers[i];
    }

    //output array in reverse
    for (int i = 0; i < ArraySize; i++)
    {
        cout << numbers[5 - i] << " ";
    }

    return 0;
}