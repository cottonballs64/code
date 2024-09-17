/*
Write a C++ program that stores the following personal information in appropriate variables before displaying it to the screen (no need for honesty):
Name
Age
Arkansas Resident
Hourly Salary
*/
#include <iostream>
using namespace std;

int main() {
string name = "Micah Stradling", home = "Arkansas Resident";
int age = 31;
double hourlySalary = 46.15;

cout << name << endl;
cout << age << endl;
cout << home << endl;
cout << "$" << hourlySalary << endl;
}
