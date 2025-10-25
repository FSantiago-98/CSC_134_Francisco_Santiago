//@name: Francisco Santiago
//@date: 10/22/25
//@purpose: Gather sales for each day from a given number of days and find the toal to write them to a file

//include directives
#include <iostream>
#include <fstream>
#include <iomanip>

//use namespace standard
using namespace std;

//include ofstream object
ofstream outFile;

//define the main function
int main()
{
  //define the variables
  int days;
  float sales;
  float total = 0;

  //open the file
  outFile.open("week9_lab2.txt");

  //use cout and cin to get number of days from user
  cout << "Please enter number of days: ";
  cin >> days;

  //use a for loop to loop over number of days and enter sales for each
  for (int i = 1; i <= days; i++)
{
    cout << "Please enter sales for day " << i << ": ";
    cin >> sales;
    outFile << sales << endl;
    total += sales;
}

    //write the total to the file
    outFile << fixed << setprecision(2);
    outFile << "====================\n";
    outFile << "Total Sales: $" << total << endl;
    outFile << "====================";

//close the file
outFile.close();
    
return 0;

}