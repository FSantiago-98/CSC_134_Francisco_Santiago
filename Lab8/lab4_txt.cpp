//@name: Francisco Santiago
//@date: 10/15/25
//@purpose: take input from user and use a for loop to ofstream user input to a text file

//include directives
#include <iostream>
#include <fstream>

//use standard namespace
using namespace std;

//define the main function
int main()
{
    //define a variable for user input
    int userNum;

    //use cin to get user input
    cout << "Enter a numnber: ";
    cin >> userNum;

    //create ofstream object
    ofstream outFile;

    //open text file
    outFile.open("lab4.txt");

    //use a for loop to write numbers to text file
    for (int i = 0; i <= userNum; i++)
    {
        outFile << i << endl;
    }

    //close text file
    outFile.close();

    cout << "Done writing..." << endl;

    return 0;

}