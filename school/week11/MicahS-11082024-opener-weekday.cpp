/*
Write a C++ program that creates an array of strings:
const int SIZE = 7;
string days[SIZE] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
Then write a for-loop that cycles through the string array, but use pointer notation in the control statements.
That is use a pointer variable to initialize the loop, check the end condition, and increment the loop.
*/
#include <iostream>
using namespace std;

const int SIZE = 7;
string days[SIZE] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

int main() {

for (string* day = days; day < days + SIZE; day++)
{
    cout << *day << endl;
}

}

