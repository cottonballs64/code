// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their "
// Inputting a 1 will use the word party. Any other number will use the word country.
// MICAH STRADLING

#include <iostream>
#include <string>
using namespace std;
// Fill in the prototype of the function writeProverb.
void writeProverb(int);

int main ()
{
int wordCode;
cout << "Given the phrase:" << endl;
cout << "Now is the time for all good men to come to the aid of their "
<< endl;
cout << "Input a 1 if you want the sentence to be finished with party"
<< endl;
cout << "Input any other number for the word country" << endl;
cout << "Please input your choice now" << endl;
cin >> wordCode; cout
<< endl;
writeProverb(wordCode);
return 0;
}

// ******************************************************************************
// writeProverb
//
// task: This function prints a proverb. The function takes a number
// from the call. If that number is a 1 it prints "Now is the time
// for all good men to come to the aid of their party."
// Otherwise, it prints "Now is the time for all good men
// to come to the aid of their country."
// data in: code for ending word of proverb (integer)
// data out: no actual parameter altered
//
// *****************************************************************************
void writeProverb (int number)
{
// Fill in the body of the function to accomplish what is described above
bool validInput = false;
while (validInput != true)
{
if (number == 1)
{
    validInput = true;
    cout << "Now is the time for all good men to come to the aid of their party";
}
else if (number == 2)
{
    validInput = true;
    cout << "Now is the time for all good men to come to the aid of their country";
}
else
{
    cout << "Inavlid input. Please try again" << endl;
    cin >> number;
};
}
}

/*
Exercise 1: Some people know this proverb as “Now is the time for all good
men to come to the aid of their country” while others heard it as “Now is
the time for all good men to come to the aid of their party.” This program
will allow the user to choose which way they want it printed. Fill in the
blanks of the program to accomplish what is described in the program
comments. What happens if you inadvertently enter a float such as -3.97?
    This triggers the else statement, so it outputs "Now is the time for all good men to come to the aid of their country"

Exercise 2: Change the program so that an input of 1 from the user will print
“party” at the end, a 2 will print “country” and any other number will be
invalid so that the user will need to enter a new choice.
    I set a while loop with a boolean check
*/