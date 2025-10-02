//@author: Francisco Santiago
//@date:9/28/25
//@purpose: use a for loop to iterate 100 times and add one to an accumulator for every loop

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main function
int main()
{

//initialize two integer variables with o
int accumulator = 0;
int num = 0;

//use a for loop to iterate from 0 to 100 and add 1 to the accumulator for every loop
for (num = 0; num <= 100; num++){
cout << num << endl;

accumulator += 1; //add 1 for every iteration of the for loop to the accumulator variable

}

cout << "The accumulator value is: " << accumulator << endl; //prints a string with accumulator value

return 0;

}
