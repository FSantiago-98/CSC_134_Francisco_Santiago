//@name: Francisco Santiago
//@date: 9/30/25
//@purpose: use nester for loops to print a square patter of stars

//include iostream directive
#include <iostream>

//use standard namespace
using namespace std;

//define the main function
int main()
{
    //define a variable for size of square
    int size;

    //prompt user to input a value for size of square
    cout << "Please enter a value for size of square: " << endl;
    cin >> size;

    //use for loops to print the square of stars according to users size
    for (int row = 1; row <= size; row++) //loop for rows
    {
        for (int column = 1; column <= size; column++) //loop for columns
        {
            cout << "* "; //prints stars equal to column variable
        }
        cout << endl; //ends row after each iteration of loop
    }
    return 0;
}