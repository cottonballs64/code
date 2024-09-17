// This program will write the name, address and telephone
// number of the programmer.
// MICAH STRADLING

// #include <iostream>
// using namespace std;
// int main()
// {
// cout << "Micah Stradling\n";// Fill in this space to write your first and last name
// cout << "112 Example Lane\n";// Fill in this space to write your address (on new line)
// cout << "Conway, AR 72034\n";// Fill in this space to write you city, state and zip (on new line) 
// cout << endl << endl << endl;// Exercise 2
// cout << "(313) 867-5309\n";// Fill in this space to write your telephone number (on new line)
// return 0;
// }

/*
Exercise 1: Retrieve program name.cpp from the Lab 2 folder.
Fill in the code so that the program will do the following:
Write your first and last name on one line.
Write your address on the next line (recall the function of the endl statement).
Write your city, state and zip on the next line.
Write your telephone number on the next line.
Remember that to output a literal, such as “Hello”, you must use quotes.
Compile and run the program.
Example: Deano Beano
123 Markadella Lane
Fruitland, Md. 55503
489-555-5555

Exercise 2: Change the program so that three blank lines separate the telephone number from the address. Compile and run the program.

Exercise 3: Change the program so that the following (but with your name and
address) is printed. Try to get the spacing just like the example. Compile
and run the program.

Copied below
*/

#include <iostream>
using namespace std;
int main()
{
cout << "************\n";
cout << "    Programmer: Micah Stradling\n";
cout << "                112 Example Lane\n";
cout << "                Conway, AR 72034\n" << endl;
cout << "    Telephone: (313) 867-5309\n";
cout << "************\n";
return 0;
}