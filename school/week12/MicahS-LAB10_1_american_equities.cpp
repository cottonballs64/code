// This program tests a password for the American Equities
// web page to see if the format is correct
// MICAH STRADLING

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//function prototypes
bool testPassWord(char[]);
int countLetters(char*);
int countDigits(char*);
int countUpperCase(char*);

int main() {
    char passWord[20];
    cout << "Enter a password consisting of exactly 4 lower-case letters and 6 digits:" << endl;
    cin.getline(passWord,20);
    if (testPassWord(passWord))
    cout << "Please wait - your password is being verified" << endl;
    else
    {
    cout << "Invalid password. Please enter a password with exactly 4 lower-case letters and 6 digits" << endl;
    cout << "For example, my37f9433e is valid" << endl;
    }
    // Fill in the code that will call countLetters and countDigits and will print
    // to the screen both the number of letters and digits contained in the password.
    cout << "There are " << countLetters(passWord) << " letters, "
    << countUpperCase(passWord) << " of which are uppercase, and "
    << countDigits(passWord) << " digits in this password." << endl;
    return 0;
    }
//**************************************************************
// testPassWord
//
// task: determines if the word in the
// character array passed to it, contains
// exactly 5 letters and 3 digits.
// data in: a word contained in a character array
// data returned: true if the word contains 5 letters & 3
// digits, false otherwise
//
//**************************************************************
bool testPassWord(char custPass[]) {
    int numLetters, numDigits, length, numCaps;
    length = strlen(custPass);
    numLetters = countLetters(custPass);
    numDigits = countDigits(custPass);
    numCaps = countUpperCase(custPass);
    if (numLetters == 4 && numDigits == 6 && length == 10 && numCaps == 0)
    return true;
    else
    return false;
    }
// the next 2 functions are from Sample Program 10.5
//**************************************************************
// countLetters
//
// task: counts the number of letters (both
// capital and lower case)in the string
// data in: a string
// data returned: the number of letters in the string
//
//**************************************************************
int countLetters(char *strPtr) {
    int occurs = 0;
    while(*strPtr != '\0')
    {
    if (isalpha(*strPtr))
    occurs++;
    strPtr++;
    }
    return occurs;
    }
//**************************************************************
// countDigits
//
// task: counts the number of digits in the string
// data in: a string
// data returned: the number of digits in the string
//
//**************************************************************
int countDigits(char *strPtr) {
    int occurs = 0;
    while(*strPtr != '\0')
    {
    if (isdigit(*strPtr)) // isdigit determines if
    // the character is a digit
    occurs++;
    strPtr++;
    }
    return occurs;
    }

//**************************************************************
// countUpperCase
//
// task: Checks each letter to see if any uppercase letters occur
// data in: a string
// data returned: Number of capital letters that occur
//
//**************************************************************
int countUpperCase(char *strPtr) {
    int occurs = 0;
    while(*strPtr != '\0')
    {
    if (isupper(*strPtr))
    occurs++;
    strPtr++;
    }
    return occurs;
    }

/*
Exercise 1: Fill in the code in bold and then run the program several times
with both valid and invalid passwords. Read through the program and
make sure you understand the logic of the code.
    Done
Exercise 2: Alter the program so that a valid password consists of 10 characters,
6 of which must be digits and the other 4 letters.
    Done
Exercise 3: Adjust your program from Exercise 2 so that only lower case
letters are allowed for valid passwords.
    Done
*/

