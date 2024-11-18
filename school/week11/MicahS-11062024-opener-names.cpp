/*
Write a C++ program that declares two string variables, firstName and lastName.
Then, create a string pointer and initialize that pointer to point to firstName.
Use that same single pointer and cout statements to print out the address of firstName,
the value of firstName, the address of lastName and the value of lastName.
*/
#include <iostream>
using namespace std;

string firstName = "Micah", lastName = "Stradling";
string *namePtr = &firstName;

int main() {
    cout << "Address: " << namePtr << " - Name: " << *namePtr << endl;
    namePtr = &lastName;
    cout << "Address: " << namePtr << " - Name: " << *namePtr << endl;
}
