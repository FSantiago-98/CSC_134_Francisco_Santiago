//@author: Francisco Santiago
//@date: 9/10/25
//@purpose: determine if a number is odd or even

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function
int main()
{
    //use a varioable to define an integer value
    int number;

    //use cout to prompt user to enter an integer number
    cout << "Enter a number: " << endl;

    //use cin to retrieve the input from the console into the number variale
    cin >> number;

    //use an if statement to determine whether the number is even/odd
    if (number % 2 == 0){
     cout << "The number, " << number << ", is even." << endl;
    }
    else{
        cout << "The number, " << number << ", is odd." << endl;
    }
    return 0;
    

}