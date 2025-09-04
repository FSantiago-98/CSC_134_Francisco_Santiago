//@author: Francisco Santiago
//@date: 9/3/25
//@purpose: print the new average temp to the console after a two percent increase

//include iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main function
int main()

{ 
    //use int and float variables for temps, the increase, and new temp results
    int nycTempjuly = 85;
    int denTempjuly = 88;
    int phoeTempjuly = 106;
    float tempInc = 0.02;
    float newNYCtemp = (nycTempjuly * tempInc) + nycTempjuly;
    float newDentemp = (denTempjuly * tempInc) + denTempjuly;
    float newPhoetemp = (phoeTempjuly * tempInc) + phoeTempjuly;

    //print the new temps to the console
    cout << "The new average July temperature for NYC is: " << newNYCtemp << endl;
    cout << "For Denver: " << newDentemp << endl;
    cout << "For Phoenix: " << newPhoetemp << endl;

    return 0;
}