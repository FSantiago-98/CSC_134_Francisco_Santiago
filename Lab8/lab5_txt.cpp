//@name: Francisco Santiago
//@date: 10/15/25
//@purpose: prompt user for names of three friends and use ofstream to print them to a text file

//include the directives
#include <iostream>
#include <fstream>
#include <string>

//use standard namespace
using namespace std;

//define the main function
int main()
{
    //define three variables to hold names
    string name1, name2, name3;

    //prompt user for three names
    cout << "Enter names for three friends: ";
    cin >> name1 >> name2 >> name3;

    //create an ofstream object
    ofstream outFile;

    //open file
    outFile.open("lab5.txt");

    //write names to file
    outFile << name1 << endl;
    outFile << name2 << endl;
    outFile << name3 << endl;

    //close file
    outFile.close();

    return 0;

}