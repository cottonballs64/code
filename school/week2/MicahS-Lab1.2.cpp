// This program demonstrates a compile error.
// MICAH STRADLING
#include <iostream>
using namespace std;
int main()
{
int number;
float total;
cout << "Today is a great day for Lab"; // Fixed for Exercise 2
cout << endl << "Let's start off by typing a number of your choice" << endl;
cin >> number;
total = number * 2;
cout << total << " is twice the number you typed" << endl;
return 0;
}

/*
Exercise 1: Bring in program semiprob.cpp from the Lab 1 folder.

Exercise 2: Compile the program. Here we have our first example of the many
syntax errors that you no doubt will encounter in this course. The error
message you receive may be different depending on the system you are
using, but the compiler insists that a semicolon is missing somewhere.
Unfortunately,where the message indicates that the problem exists, and
where the problem actually occurs may be two different places. To correct
the problem place a semicolon after the line cout << "Today is a great
day for Lab".
Most syntax errors are not as easy to spot and correct as this one.

Exercise 3: Re-compile the program and when you have no syntax errors, run
the program and input 9 when asked. Record the output.

Today is a great day for Lab
Let's start off by typing a number of your choice
9
18 is twice the number you typed

Exercise 4: Try running it with different numbers. Record your output.
Do you feel you are getting valid output?

10
20 is twice the number you typed

1
2 is twice the number you typed

-100
-200 is twice the number you typed

3.75
6 is twice the number you typed

It seems right so long as I'm using integers
*/
