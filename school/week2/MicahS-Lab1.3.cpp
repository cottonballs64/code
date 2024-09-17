// This program will take a number and divide it by 2.
// MICAH STRADLING
#include <iostream>
using namespace std;
int main()
{
float number;
int divider;
divider = 2; // Exercise 3 fix
cout << "Hi there" << endl;
cout << "Please input a number and then hit return" << endl;
cin >> number;
number = number / divider;
cout << "Half of your number is " << number << endl;
return 0;
}

/*
Exercise 1: Bring in program runprob.cpp from the Lab 1 folder.

Exercise 2: Compile the program. You should get no syntax errors.

Exercise 3: Run the program. You should now see the first of several run time
errors. There was no syntax or grammatical error in the program; however,
just like commanding someone to break a law of nature, the program is
asking the computer to break a law of math by dividing by zero. It cannot
be done. On some installations, you may see this as output that looks very
strange. Correct this program by having the code divide by 2 instead of 0.

Exercise 4: Re-compile and run the program. Type 9 when asked for input.
Record what is printed.
Half of your number is 4.5

Exercise 5: Run the program using different values. Record the output.
Do you feel that you are getting valid output? 
0
Half of your number is 0
2.8
Half of your number is 1.4
299
Half of your number is 149.5

Seems to be working decent now

*/
