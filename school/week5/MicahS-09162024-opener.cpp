/*
Write a C++ program that asks the user whether or not they had a good weekend. The program should prompt the user to enter "Y or N".
Then, the program should collect the char entry from the user, and print out one of three messages.
If the user enters 'y' or 'Y', then the program should respond with "That's great to hear!"
If the user enters 'n' or 'N', then the program should respond with "I am sorry to hear that."
If the user enters any other character, the program should respond with, "Sounds like someone has a case of the Mondays!"
*/
#include <iostream>
using namespace std;

int main() {

char userResponse;

// Write a C++ program that asks the user whether or not they had a good weekend. The program should prompt the user to enter "Y or N".
cout << "Did you have a nice weekend? Please response with (Y/N)\n";
cin >> userResponse;

// If the user enters 'y' or 'Y', then the program should respond with "That's great to hear!"
if (userResponse == 'Y' || userResponse == 'y')
{
    cout << "That's great to hear!\n";
    return 0;
} 
// If the user enters 'n' or 'N', then the program should respond with "I am sorry to hear that."
else if (userResponse == 'N' || userResponse == 'n')
{
    cout << "I am sorry to hear that.\n";
    return 0;
}
// If the user enters any other character, the program should respond with, "Sounds like someone has a case of the Mondays!"
else
{
    cout << "Sounds like someone has a case of the Mondays!\n";
    return 0;
}
}
