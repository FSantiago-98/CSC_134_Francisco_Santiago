//@name: Francisco Santiago
//@date: 10/15/25
//@purpose: use ifstream to read numbers from a file and print their sum

//include directives
#include <iostream>
#include <fstream>

//use standard namespace
using namespace std;

//define the main function
int main()
{
    //declare variables
    int sum = 0;
    int number;

    //create ifstream object
    ifstream inFile;

    //open the file
    inFile.open("numbers.txt");

    //use while loop to read numbers fromm file and sum them
    while (inFile >> number)
    {
        cout << number << endl;
        sum += number;
    }

    //close the file
    inFile.close();

    //print the sum
    cout << "The sum of the numbers is: " << sum << endl;

    return 0;

}