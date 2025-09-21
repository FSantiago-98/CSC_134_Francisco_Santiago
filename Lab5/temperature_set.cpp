//@author: Francisco Santiago
//@date: 9/20/25
//@purpose: Use a while loop to request a temperature until the correct one is set

//include iostream directivce
#include <iostream>

//use the standard namespace
using namespace std;

//main function
int main() 
{
    //use a variable to define the temperature
    double temp;

    //use a while loop to request the temperature until the correct one is set
    while (temp != 212.34){
        cout << "Please enter a temperature value: " << endl;
        cin >> temp;

    }

    cout << "The temperature has been successfully set, thank you." << endl;

    return 0;
}