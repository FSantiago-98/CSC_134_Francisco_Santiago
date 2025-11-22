//@author: Francisco Santiago
//@date: 11/22/25
//@purpose: use nested functions to calculate the average and square of a number

//include directives
#include <iostream>

//use the namespace standard
using namespace std;

//function prototypes
double averageValues(double num1, double num2, double num3){ //function that calculates average of numbers
    return (num1 + num2 + num3) / 3;
}

double squareNumber(double num){ //function that calculates square of a number
    return num * num;
}

double multipleFuncs(double num1, double num2, double num3){
    double average = averageValues(num1, num2, num3); //call the function for averaging
    double square = squareNumber(average); //call the function for squaring
    return square;
}

//define the main function
int main(){
    //define the variables
    double val1 = 0, val2 = 0, val3 = 0;
    double result = 0;
    cout << "Please enter three values: "; //prompt user to input three values
    cin >> val1 >> val2 >> val3; //store input into variables
    result = multipleFuncs(val1, val2, val3); //call the layered function
    cout << "The result is " << result << endl;

    return 0;

}

