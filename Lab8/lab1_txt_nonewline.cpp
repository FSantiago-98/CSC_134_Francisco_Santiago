//@name: Francisco Santiago
//@date: 10/15/25
//@purpose : create a text file using ofstream object and write to it

//include necessary directives
#include <iostream>
#include <fstream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
    //create ofstream object
    ofstream outFile;

    //open file
    outFile.open("lab3.txt");

    //write to file
    outFile << "Bourne Identity";
    outFile << "Star Wars Episode IV";
    outFile << "The Hunger Games";
    outFile << "Dead Pool";
    outFile << "X-Men First Class";
    outFile << "Star Wars Episode V";
    outFile << "Get Out";

    //close the file
    outFile.close();

    return 0;

}