/*
Write a C++ program that asks the user to rate the softness of their bed from 1 (hardest) to 10 (softest).
If the user enters a 3 or lower, the program should respond by printing the message, "That is too hard!"
If the user enters a 8 or higher, the program should respond by printing the message, "That is too soft!"
If the user enters a number between 3 and 8, the program should respond by printing the message, "That is just right!"
In all cases, the program should finish by printing the message, "Pleasant dreams!" 
*/
#include <iostream>

using namespace std;

int main() {

int bedRate = 0;

cout << "Would Goldilocks sleep in your bed? How would you rate its softness?\n" << "Please enter a number between 1 and 10. 1 being the hardest bed possible and 10 being the softest.\n";

cin >> bedRate;
if (bedRate <= 3 && bedRate != 0) 
{
cout << "That is too hard!" << endl;
}
    else if (bedRate >= 8) {
        cout << "That is too soft!" << endl;
    }
    else if (bedRate > 3 & bedRate < 8) {
        cout << "That is just right!" << endl;
    }
    else if (bedRate == 0)
        cout << "Looks like you entered something wrong. Please try running the program again.\n";
}
