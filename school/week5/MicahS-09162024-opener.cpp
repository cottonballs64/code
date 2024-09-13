/*
Create a program that performs different arithmatic operations on two integers of the user's choice after the user selects which operation to perform via a menu.
Prompt the user for two integers, a and b.
Collect those integers from the user.
Prompt the user to enter the sort of operation they want to perform: +, -, *, /, or %.
Then, depending on the user's input, perform the operation and display the result to the screen.
*/
#include <iostream>
using namespace std;

int main() {

int numberX, numberY, answer;
char arithmaticSelection;
string equals = " = ";

// Explain function of program to user
cout <<"This program will take two integers and perform an arithmatic operation on them using C++. (For example X + Y)\n";
// Prompt for integer input
cout << "What number would you like X to be?\n";
cin >> numberX;
cout << "What number would you like Y to be?\n";
cin >> numberY;
// Prompt for arithmatic selection
cout << "Please enter a selection for which type of operation you want to perform with your two numbers.\n";
cout << "A) X + Y\n";
cout << "B) X - Y\n";
cout << "C) X * Y\n";
cout << "D) X / Y\n";
cout << "E) X % Y\n";
cout << "F) Cancel program\n";
cin >> arithmaticSelection;
//Performs requested function
if (arithmaticSelection == 'A' || arithmaticSelection == 'a')
{
    answer = numberX + numberY;
    cout << numberX << " + " << numberY << equals << answer;
} 
else if (arithmaticSelection == 'B' || arithmaticSelection == 'b')
{
    answer = numberX - numberY;
    cout << numberX << " - " << numberY << equals << answer;
}
else if (arithmaticSelection == 'C' || arithmaticSelection == 'c')
{
    answer = numberX * numberY;
    cout << numberX << " * " << numberY << equals << answer;
}
else if (arithmaticSelection == 'D' || arithmaticSelection == 'd')
{
    answer = numberX / numberY;
    cout << numberX << " / " << numberY << equals << answer;
}
else if (arithmaticSelection == 'E' || arithmaticSelection == 'e')
{
    answer = numberX % numberY;
    cout << numberX << " % " << numberY << equals << answer;
}
else
{
    return 0;
};
}
