/*
Write a C++ program that prompts the user to enter a number, 1, 2, 3 or 4.  Read in the number the user enters.
Use a switch statement to print out the following messages depending on what the user enters:
1 --> "One for the money."
2  --> "Two for the show."
3  --> "Three to get ready."
4  --> "Four to GO, GO, GO!"
*/
#include <iostream>
using namespace std;

int main() {
int number;
cout << "Please enter a number, either 1, 2, 3, or 4.\n";
cin >> number;

switch (number)
{
case 1:
    cout << "One for the money.\n";
    break;
case 2:
    cout << "Two for the show.\n";
    break;
case 3:
    cout << "Three to get ready.\n";
    break;
case 4:
    cout << "Four to GO, GO, GO!\n";
    break;
}
return 0;
}
