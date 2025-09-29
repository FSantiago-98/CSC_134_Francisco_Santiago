//@author: Francisco Santiago
//@date:9/28/25
//@purpose: use a for loop to print a multiplactio table an integer input

//include the iostream directive
#include <iostream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
//define an integer variable to use for user input
int num = 0; 
int userNum;
//use cout and cin to ask user for input
cout << "Please enter an integer value: " << endl;
cin >> userNum;
for (num = 0; num < 12; num++){
cout << num * userNum << endl;
}

return 0;

}

