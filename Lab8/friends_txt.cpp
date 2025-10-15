//@name: Francisco Santiago
//@date: 10/15/25
//@purpose: use ifstream to read names from a file

//include directives
#include <iostream>
#include <fstream>
#include <string>

//use standard namespace 
using namespace std;

//define the main function
int main()
{
    //declare variables
    string name;

    //create ifstream object
    ifstream inFile;

    //open text file
    inFile.open("friends.txt");

    //use while loop to get names from file
    while (getline(inFile, name))
    {
        cout << name << endl;
    }

    //close the file
    inFile.close();

    return 0;
}