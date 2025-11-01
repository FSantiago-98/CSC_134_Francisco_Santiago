//@author: Francisco Santiago
//@date: 10/29/25
//@purpose: Calculate average of ten grades using an array

//include directive
#include <iostream>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
    //define the variables
    const int ArraySize = 10;
    int grades[ArraySize];
    int totalGrade = 0;
    int gradeAverage;

    //use a for loop to get grades from user and find the total 
    for (int i = 1; i <= ArraySize; i++)
    {
        cout << "Please enter a grade value as an integer: ";
        cin >> grades[i - 1];
        totalGrade += grades[i - 1];
    }

    //calculate average grade based on total grade and divide by 10
    gradeAverage = totalGrade / 10;

    cout << "The average grade is " << gradeAverage << endl;

    return 0;

}
