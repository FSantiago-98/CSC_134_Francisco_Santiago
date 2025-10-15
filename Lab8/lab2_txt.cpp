//@name: Francisco Santiago
//@date: 10/15/25
//@purpose: create a text file and use ofstream object to create a shopping cart layout

//include the directives
#include <iostream>
#include <fstream>

//use standard namespace
using namespace std;

//define main function
int main()
{
    //create ofstream object
    ofstream outFile;

    //open file
    outFile.open("lab2.txt");

    //write to file
    outFile << "**************************************\n";
    outFile << "\t\t\tShopping Cart\n";
    outFile << "**************************************\n";
    outFile << "product code\tqty\t\tprice\n";
    outFile << "\t789\t\t\t7\t\t$12.00\n";
    outFile << "\t\t\t\t\t\tTotal: $84.00";

    //close file
    outFile.close();

    return 0;

}