/*
Write a C++ program that prompts the user whether or not they will watch the Super Bowl this weekend.
The program should ask them to answer with a Y or N.  

Include an error-checking loop, so that if the user answers with any other character, the prompt repeats until the user enters Y or N.

Either way the user responds, the program should tell them to have a great weekend.
*/
#include <iostream>
using namespace std;

int main() {
char answer = 'a';
do
{
    cout << "Are you planning on watching the superbowl this weekend?\n";
    cout << "Please answer with Y or N\n";
    cin >> answer;
}
while (!(answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n'));

if (answer == 'Y' || answer == 'y')
{
    cout << "Make sure and buy enough chips & dip!\n" <<  "Be sure to have a great weekend!\n";
}
else if (answer == 'N' || answer == 'n')
{
    cout << "Bummer, I heard it's gonna be a good game.\n" << "Regardless, have a great weekend!\n";
}
}
