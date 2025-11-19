//@author: Francisco Santiago
//@date: 11/19/25
//@purpose: use functions to loop over a value

//include directive
#include <iostream>

//use the namespace standard
using namespace std;

//define the loop function
void loop(int num1){
  for (int count = 1; count <= num1; count++){
    cout << "This is loop number " << count << endl;
    return;
  }

//define the main function
int main(){
  //declare variables
  int num = 0;

  //prompt user to enter an integer value
  cout << "Please enter an integer value: ";
  cin >> num;

  //call on the loop function to loop over the entered value
  loop(num)

  return 0;
}
