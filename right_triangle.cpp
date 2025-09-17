//@author: Francisco Santiago
//@date: 9/17/25
//@purpose: calculate the angle "0" and determine if it is a 3-4-5 triangle

//include the iostream and cmath directives
#include <iostream>
#include <cmath>
#include <iomanip>

//use the standard namespace
using namespace std;

//define the main function
int main()
{
    float lengthX = 3; //length of side x
    float heightY = 4; //height of side y
    float pi = 3.14159;
    float hypotenuseC = sqrt((pow(lengthX, 2) + pow(heightY, 2))); //use math functions to calculate the hypotenuse
    float theta = (atan2(heightY /lengthX)) * (180/pi); //calculate theta in degrees
    float angleTheta = 53.13

    cout << theta << fixed << setprecision(2) << endl;

    if (theta = angleTheta){
         cout << "This is a 3-4-5 triangle." << endl;
    }
        else{
            cout << "This is NOT a 3-4-5 triangle." << endl;
        }

    return 0;
}
