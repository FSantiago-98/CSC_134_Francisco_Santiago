//@author: Francisco Santiago
//@date: 9/30/25
//@purpose: use nested for loops to print multiplication table for the numbers 1 through 10

//include the iostream directive
#include <iostream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
    //define variables
    int num1, num2;

    //use nested for loops to print the multiplication table for the numbers 1 through 10
    for (num1 = 1; num1 <= 10; num1++)
    {
        for (num2 = 1; num2 <= 10; num2++)
        {
            cout << num1 * num2 << "\t" << endl;
        }
    }
}