//@author: Francisco Santiago
//@date: 11/8/25
//@purpose: create a line graph and plot points

//include directives
#include <iostream>

//use the namespace standard
using namespace std;

//define the main function
int main(){

    //declare variables
    const int m = 2;
    const int b = 3;
    int xAxis[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int xValues[5] = {0, 1, 2, 3, 4};
    int i;

    //display the y axis
    for (int i = 15; i >= 0; i--){
        cout << i << "|";

        for (int x : xValues){ //calculates y values
            int y = (m * x) + b;

            if (i == y){ //prints x at every y coordinate
                cout << "X";
            }
                else{ //prints a space for every point that does not have a y value
                cout << " ";
                }
            }
           cout << endl;
        }
            cout << " ";

            for (int j : xAxis){
                    cout << "|" << j;
                }
            return 0;
        }