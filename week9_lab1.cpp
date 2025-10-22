//@name: Francisco Santiago
//@date: 10/22/25
//@purpose: Gather sales for each day from a given number of days and write them to a file

//include directives
#include <iostream>
#include <ofstream>

//use namespace standard
using namespace std;

//include ofstream object
ofstream outFile;

//open the file
outFile.open(week9_lab1.txt);

//define the main function
int main()
{
  //define the variables
  int days;
  float sales;

  //use cout and cin to get number of days from user
  cout << "Please enter number of days: ";
  cin >> days;

  //use a for loop to loop over number of days and enter sales for each
  for (int i = 1; i <= days; i++)
{
    cout << "Please enter sales for day " << days << ": ";
    cin >> sales;
    outfile << sales << endl;
}

//close the file
outFile.close()
    
return 0;

}
