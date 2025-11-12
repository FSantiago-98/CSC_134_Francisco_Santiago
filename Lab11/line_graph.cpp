//@author: Francisco Santiago
//@date: 11/8/25
//@purpose: plot points on a line graph

//include directives
#include <iostream>

//use namespace standard
using namespace std;

//define main function
int main()
{
    //declare variables
    const double m = 2; //slope
    const double b = 3; //y-intercept
    int yAxis = 15; //y-axis limit
    int xAxis = 19; //x-axis limit
    int xValue[5] = {0, 1, 2, 3, 4}; //x values for equation
    double y[5]; //array that stores y values

    //determine the y values and assigns them to an array
    for (int x : xValue)
    {
        y[x] = (m * x) + b;
    }

    //build y axis
    for (int i = yAxis; i >= 0; i--){
        bool plotted = false;

        for (int j = 4; j >= 0; j--){
        int yVal = (m * xValue[j]) + b;

        if (yVal == i){
            cout << i << "|" << endl;

            for (int k = 0; k < yVal - 2; k++){ //determines the number of spaces
                if(xValue[j] > 0){
                    cout << " ";
                }
            }
            cout << "x" << endl; //prints an x for the point
            plotted = true;
        }
    }
    if (plotted == false){ //prints out y axis label
        cout << i << "|" << endl;
    }
}
//build x axis
cout << " ";
for (int w = 0; w <= 19; w++){
    cout << "|" << w;
}

return 0;

}
       
    