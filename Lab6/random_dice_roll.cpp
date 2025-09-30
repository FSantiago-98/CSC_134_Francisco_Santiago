//@author: Francisco Santiago
//@date:9/28/25
//@purpose: use a for loop to simulate a dice roll

//include iostream and cstdlib directive
#include <iostream>
#include <cstdlib>
#include <ctime>

//use the namespace standard
using namespace std;

//define the main function
int main()
{
    int diceRoll;
    int roll;
    
    //use cout and cin to ask user for amount of times to roll dice
    cout << "How many times do you want to roll the dice?" << endl;
    cin >> diceRoll;

    srand(time(0));

    //use for loop to roll dice 
    for (int i = 1; i <= diceRoll; i++){
        roll = rand() % 6 + 1;
        cout << "You rolled a: " << roll << endl;
    }

}


