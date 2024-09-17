// This program demonstrates the use of characters and strings
// MICAH STRADLING

#include <iostream>
#include <string>
using namespace std;
// Definition of constants
const string FAVORITESODA = "Dr. Dolittle"; // use double quotes for strings
const char BESTRATING = 'A'; // use single quotes for characters
int main()
{
char rating; // 2nd highest product rating
string favoriteSnack; // most preferred snack
int numberOfPeople; // the number of people in the survey
int topChoiceTotal; // the number of people who prefer the top choice
// Fill in the code to do the following:
favoriteSnack = "crackers";// Assign the value of "crackers" to favoriteSnack
rating = 'B';// Assign a grade of 'B' to rating
numberOfPeople = 250;// Assign the number 250 to the numberOfPeople
topChoiceTotal = 148;// Assign the number 148 to the topChoiceTotal
// Fill in the blanks of the following:
cout << "The preferred soda is " << FAVORITESODA << endl;
cout << "The preferred snack is " << favoriteSnack << endl;
cout << "Out of " << numberOfPeople << " people "
<< topChoiceTotal << " chose these items!" << endl;
cout << "Each of these products were given a rating of " << BESTRATING;
cout << " from our expert tasters" << endl;
cout << "The other products were rated no higher than a " << rating
<< endl;
return 0;
}

/*
Exercise 1: Retrieve program stringchar.cpp from the Lab 2 folder. This
program illustrates the use of characters and strings. The char data type
allows only one character to be stored in its memory location. The string
data type (actually a class and not a true data type built into the language)
allows a sequence of characters to be stored in one memory location.

Exercise 2: Fill in the indicated code, then compile and run the program.
Continue to work on the program until you have no syntax, run-time, or
logic errors.
The output should look similar to the following:
The preferred soda is Dr. Dolittle
The preferred snack is crackers
Out of 250 people 148 chose these items!
Each of these products were given a rating of A from our expert tasters
The other products were rated no higher than a B

Exercise 3: Is it possible to change the choice of FAVORITESODA by adding
code within the main module of the program? Why or why not?

No it is a constant

Exercise 4: Is it possible to change the choice of favoriteSnack by adding code
within the program? Why or why not?

Yes, you can redefine the string mid program and store a new one.

*/