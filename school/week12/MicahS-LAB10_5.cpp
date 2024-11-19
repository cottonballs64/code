// MICAH STRADLING
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char userString[51];
    int length, middle1, middle2;
    cout << "A palindrome is a string of characters that reads the same forwards as backwards." << endl;
    cout << "This program can take up to 50 characters as a string and see if it is a palindrome." << endl;

    cout << "Please enter your string: " << endl;
    cin >> userString;
    length = strlen(userString);

    cout << "This string's number of characters is: " << length << endl << endl;
    cout << "Let's see if " << userString << " is a palindrome" << endl << endl;

    // Determine starting point of comparison
    if ((length % 2) == 1)
    {
        middle1 = length / 2;
        middle2 = length / 2;
    }
    else
    {
        middle1 = (length - 1) / 2;
        middle2 = (length + 1) / 2;
    }

    do
    {
        if (userString[middle1] == userString[middle2])
        {
            cout << "Character " << (middle1+1) << " is: " << userString[middle1] << endl; 
            cout << "Character " << (middle2+1) << " is: " << userString[middle2] << endl;
            cout << endl << "These match" << endl << endl;
            middle1--;
            middle2++;
        }
        else        
        {
            cout << "Character " << (middle1+1) << " is: " << userString[middle1] << endl; 
            cout << "Character " << (middle2+1) << " is: " << userString[middle2] << endl;
            cout << endl << "These don't match" << endl << endl;
            cout << "This string is not a palindrome." << endl;
            return 0;
        }
    }
    while (middle1 >= 0 && middle2 <= length);
    cout << "This is a palindrome" << endl;
}

/*
Exercise 1: A palindrome is a string of characters that reads the same forwards as backwards. For example, the following are both palindromes:
1457887541 madam
Write a program that prompts the user to input a string of a size 50 characters or
less. Your program should then determine whether or not the entered string is a
palindrome. A message should be displayed to the user informing them whether
or not their string is a palindrome.
*/
