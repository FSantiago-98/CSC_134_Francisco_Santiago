//@author: Francisco Santiago
//@date: 9/17/25
//@purpose: use a while loop to gather ten inputs and output the average

//include iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main function
int main()
{
    int tenGrades = 0;
    float grade;
    float gradesSum = 0;
    float avg;

    while(tenGrades < 10){
        cout << "Enter grade: " << endl;
        cin >> grade;
        gradesSum += grade;
        tenGrades++;
    }
    avg = gradesSum / 10;
    cout << "The average of the ten grades is: " << avg << endl;

    return 0;

}
