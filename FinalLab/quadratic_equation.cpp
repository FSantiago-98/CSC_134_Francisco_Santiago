//@author: Francisco Santiago
//@date: 12/8/25
//@purpose: use the quadratic formula to determine a distance

//include directives
#include <iostream>
#include <cmath>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
  //declare variables
  double a = -0.01568;
  double b = 1.00000;
  double c = 1.5;
  double x = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

  cout << "The distance travelled is " << x << endl;
  
return 0;
}