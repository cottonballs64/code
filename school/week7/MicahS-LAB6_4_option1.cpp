/*
MICAH STRADLING

Option 1: Write a program that will read two floating point numbers (the first
read into a variable called first and the second read into a variable called
second) and then calls the function swap with the actual parameters first
and second. The swap function having formal parameters number1 and
number2 should swap the value of the two variables. Note: This is similar
to a program you did in Lesson Set 1; however, now you are required to
use a function. You may want to look at logicprob.cpp from Lesson Set 1.

Exercise 1: Compile the program and correct it if necessary until you get no
syntax errors.
Exercise 2: Run the program with the sample data above and see if you get the
same results.
Exercise 3: 
    The swap parameters must be passed by REFERENCE. (Assume that main produces the output.) Why?
    Cause otherwise the values passed wouldn't be overwritten with the new values from the function.
*/

#include <iostream>
using namespace std;

void swap (float&, float&);

int main()
{
    float number1, number2;
    cout << "Please enter two numbers with a space between them:" << endl << endl;
    cin >> number1 >> number2;
    swap (number1, number2);
    // Added for Exercise 3
    cout << "They have been swapped in memory. Now the first number is " << number1 << " and the second number is " << number2 << endl;
    cout << "Thanks for using this program." << endl;
    return 0;
}

void swap(float& first, float& second){
    cout << "Your numbers were " << first << " and " << second << endl;
    float hold;
    hold = first; // Just set a temporary variable to hold the first number while re-assigning them to each other.
    first = second;
    second = hold;

    //commented out for Exercise 3
    // cout << "They have been swapped in memory. Now the first number is " << first << " and the second number is " << second << endl; 
}
