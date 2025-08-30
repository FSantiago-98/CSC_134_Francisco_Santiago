//@author: Francisco Santiago
//date: 8/27/25
//@purpose: Divide a number by zero and review error.

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int num1 = 7;
    int num2 = 0;
    int quotient = num1 / num2;

    //use the standard output for the console and print the quotient of the variables defined above
    std::cout << quotient << std::endl;

    return 0;
}

