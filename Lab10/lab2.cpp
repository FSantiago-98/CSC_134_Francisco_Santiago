//@author: Francisco Santiago
//@date: 10/29/25
//@purpose: initialize an array with 5 values and print the sum of those values 

//include the directive
#include <iostream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
    //define the variables
    const int ArraySize = 5;
    int num[ArraySize] = {2, 4, 6, 8, 10};
    int sum = 0;

    for(int i = 1; i <= ArraySize; i++)
    {
        cout << "Value number " << i << " is " << num[i - 1] << endl;
        sum += num[i - 1];
    }

    cout << "The sum of the values is: " << sum;

    return 0;
}
