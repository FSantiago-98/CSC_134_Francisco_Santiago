//@author: Francisco Santiago
//@date: 9/20/25
//@purpose: Use a while loop to track number of iterations up to 100

//include iostream directive
#include <iostream>

//use standard namespace
using namespace std;

//define the main function
int main() 
{
    //declare a variable to count iterations
    int count = 0;

    //use a while loop to loop until 100th iteration
    while(count < 100){
        count++;
        cout << "This is iteration: " << count << endl;
    }

    cout << count << " iterations were completed" << endl;

    return 0;

}