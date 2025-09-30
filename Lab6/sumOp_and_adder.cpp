//@author: Francisco Santiago
//@date:9/28/25
//@purpose: use a for loop to add two integers and print out the sum

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main function
int main()
{

    //define and initialize sumop, adder, and num variables
    int sumOp = 0;
    int adder = 10;
    int num;

    //use a for loop to iterate from 0 to 50 and add adder to loop counter num
    for (num = 0; num <= 50; num++){
        sumOp = num + adder; //sumOp is assigned the value of num plus adder
        cout << sumOp << endl; // print sumOp for every iteration of the loop
    }

    return 0;
}