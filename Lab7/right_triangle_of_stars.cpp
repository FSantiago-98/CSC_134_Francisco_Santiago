//@author: Francsico Santiago
//@date: 9/30/25
//@purpose: use nested for loops to print a right triangle of stars

//include iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main function
int main()
{
    //define an integer for number of rows
    int rows;

    //prompt user to input the number of rows
    cout << "Enter a value for the number of rows: " << endl;
    cin >> rows;

    //use for loops to print stars and rows
    for (int i = 1; i <= rows; i++) //loop for number of rows
    {
        for (int stars = 1; stars <= i; stars++) //loop that prints stars equal to variable i on each row
        {
            cout << "*"; 
        }
        cout << endl; //makes a new line after each iteration of outer loop
    }
    return 0;

}