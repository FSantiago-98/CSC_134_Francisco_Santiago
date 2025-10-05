//@author: Francisco Santiago
//@date: 10/4/25
//@purpose: use for loop to collect input from user for monthly budget

//include iostream directive
#include <iostream>

//use standard namespace
using namespace std;

//define the main function
int main()
{
    //declare variables
    double budget, expense, totalExpense = 0;
    int numExpenses;

    //prompt user for input
    cout << "What is the amount for your monthly budget? ";
    cin >> budget;
    cout << "How many expenses do you have this month? ";
    cin >> numExpenses;

    //use for loop to collect all expenses
    for (int i = 1; i <= numExpenses; i++){
        cout << "Please enter expense " << i << ": ";
        cin >> expense;
        totalExpense += expense;
    }
    //display total expenses and use if statement to determine whether user is over/under budget
    cout << "Your total expenses for the month are: $" << totalExpense << endl;
    if (totalExpense > budget){
        cout << "You are over budget by $" << totalExpense - budget << endl;
    }
    else if (totalExpense < budget){
        cout << "You are under budget by $" << budget - totalExpense << endl;
    }
    else {
        cout << "You are right on budget!" << endl;
    }
    return 0;
}