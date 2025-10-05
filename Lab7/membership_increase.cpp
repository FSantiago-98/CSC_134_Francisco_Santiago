//@author: Francisco Santiago
//@date: 10/1/25
//@purpose: use for loops to display increase in sales for a country club over six years

//include iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main funstion
int main()
{
  double membership = 250000; //accumulator variable that holds the membership price
  double percentInc = 0.06; //variable that holds the percentage increase 
  double amountIncperYear = membership * percentInc; //determines the amount of increase per year
  int year;

  //for loop that displays the increase in membership price over five years
  for (year = 1; year <= 5; year++){
      membership += amountIncperYear; //updates the membership price by adding the increase amount
      cout << "The new yearly price for year " << year << " is: " << membership << endl;
        }

return 0;

}


  
  
