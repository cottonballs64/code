#include <iostream>
using namespace std;
// MICAH STRADLING
const int MAXNAME = 10;
int main()
{
    char last[MAXNAME];

    cout << "Please enter your last name (Do not enter more than 9 characters)" << endl;
    cin.getline(last,10);

    cout << "Hello, " << last << endl;

    return 0;
}

/*
Exercise 1: Write a short program called readata.cpp that defines a character
array last which contains 10 characters. Prompt the user to enter their last
name using no more than 9 characters. The program should then read the
name into last and then output the name back to the screen with an
appropriate message. Do not use the getline() or get functions!

Exercise 2: Once the program in Exercise 1 is complete, run the program and
enter the name Newmanouskous at the prompt. What, if anything,
happens? (Note that the results could vary depending on your system).
    It threw an error after returning the below:
        Hello, Newmanouskous

Exercise 3: Re-write the program above using the getline() function (and
only allowing 9 characters to be input). As before, use the character array
last consisting of 10 elements. Run your new program and enter
Newmanouskous at the prompt. What is the output?
    Hello, Newmanous
        It cut off the excess characters and did not throw an error
*/
