//@author: Francisco Santiago
//@date: 10/29/25
//@purpose: Input sales from a file and create an array to find total of sales

//include directives
#include <iostream>
#include <fstream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
    //define the variables
    const int ArraySize = 5;
    float sales[ArraySize];
    float totalSales = 0;
    ifstream inputFile;

    //open the sales file
    inputFile.open("sales.txt");

    //read sales from file and add to array
    for (int i = 1; i <= ArraySize; i++)
    {
        inputFile >> sales[i - 1];
        totalSales += sales[i -1];
    }

    //close the file
    inputFile.close();

    //print total sales
    cout << "The total sales are: $" << totalSales << endl;

    return 0;
}
    

