//@suthor: Francisco Santiago
//@date: 9/10/25
//@purpose: determine if a letter is a vowel or consonant

//include the iostream directive
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function
int main()
{
    // use a variable to dine a chararacter value
    char letter;

    //use cout to prompt the user for a letter
    cout << "Please enter a letter: " << endl;

    //use cin to retrieve the input from the console and store it in variable letter
    cin >> letter; 

    //use an if statement to determine whether the input character is a vowel or consonant
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        cout << "The letter, " << letter << ", is a vowel." << endl;
    } 
    else {
        cout << "The letter, " << letter << ", is a consonant." << endl;
    }
        
    
    return 0;

 }
        