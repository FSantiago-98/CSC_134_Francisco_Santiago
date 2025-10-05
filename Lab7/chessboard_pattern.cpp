//@author: Francisco Santiago
//@date:10/1/25
//@purpose: use user input to determine size of square and print a square of stars

//include iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main function
int main()
{
  int size; //variable that contains the size of the chessboard

  //receive input from user to set value of size variable
  cout << "What size should the chessboard be?" << endl;
  cin >> size;

  //for loops that create the chessboard by row and column according to size variable
  for (int i = 1; i <= size; i++){
      for (int j = 1; j <= size; j++){
          if ((i + j) % 2 == 0){
            cout << "* ";
          }
          else{
            cout << " ";
          }
      }
      cout << endl;
  }
return 0;
}
            
          
