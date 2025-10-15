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
    outFile.open("lab1.txt");

    //write to file
    outFile << "Bourne Identity\n";
    outFile << "Star Wars Episode IV\n";
    outFile << "The Hunger Games\n";
    outFile << "Dead Pool\n";
    outFile << "X-Men First Class\n";
    outFile << "Star Wars Episode V\n";
    outFile << "Get Out";

    //close the file
    outFile.close();

    return 0;

}