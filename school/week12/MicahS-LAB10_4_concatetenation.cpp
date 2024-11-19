// MICAH STRADLING

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char string1[25] ="Total Eclipse ";
    char string2[11] = "of the Sun";
    cout << string1 << endl;
    cout << string2 << endl;
    strcat(string1,string2);
    cout << string1 << endl;
    return 0;
}

/*
Exercise 1: Write a complete program including the above code that outputs
the concatenation of string1 and string2. Run the program and record
the result.
    Total Eclipse 
    of the Sun
    Total Eclipse of the Sun

Exercise 2: Alter the program in Exercise 1 so that string1
contains 20 characters rather than 25. Run the program. What happens?
    I have an error thrown when it tries to concatenate due to the string not being large enought to store all the characters needed
*/
