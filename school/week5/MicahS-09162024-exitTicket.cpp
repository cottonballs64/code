/*
Write a C++ program that prompts the user for a percentage, and then prints out the letter grade appropriate to that percentage on the following scale:
90-100 == A
80-89 == B
70-79 == C
60-69 == D
59 or lower == F
How would we solve this using if-else if, statements?  How would we use a switch statement?  Try to use a switch statement.
*/
#include <iostream>
using namespace std;

int main() {

double userGrade;
int letterGrade;

cout << "Please enter the percentage grade you received.\n";
cin >> userGrade;
// Convert to int and simplify range
letterGrade = (int)(userGrade / 10);
// Handle cases of grades higher than 100
if (letterGrade > 10)
{
    letterGrade = 10;
};
// Provide user feedback using switch statement
switch (letterGrade)
{
case 10:
case 9: cout << "You got an A on the test\n";
    break;
case 8: cout << "You got a B on the test\n";
    break;
case 7: cout << "You got a C on the test\n";
    break;
case 6: cout << "You got a D on the test\n";
    break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0: cout << "You got a F on the test\n";
    break;
default : cout << "Looks like you entered something else";
break;
}

return 0;

}
