// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.
// MICAH STRADLING
#include <iostream>
using namespace std;

int main()
{
float firstNumber;
float secondNumber;
// Prompt user to enter the first number.
cout << "Enter the first number" << endl;
cout << "Then hit enter" << endl;
cin >> firstNumber;
// Prompt user to enter the second number.
cout << "Enter the second number" << endl;
cout << "Then hit enter" << endl;
cin >> secondNumber;
// Echo print the input.
cout << endl << "You input the numbers as " << firstNumber
<< " and " << secondNumber << endl;
// Now we will swap the values.
firstNumber = secondNumber;
secondNumber = firstNumber;
// Output the values.
cout << "After swapping, the values of the two numbers are "
<< firstNumber << " and " << secondNumber << endl;
return 0;
}

/*
Exercise 1: Bring in program logicprob.cpp from the Lab 1 folder. 

Exercise 2: Compile this program. You should get no syntax errors.

Exercise 3: Run the program. What is printed?
Enter the first number
Then hit enter
1
Enter the second number
Then hit enter
2

You input the numbers as 1 and 2
After swapping, the values of the two numbers are 2 and 2

Exercise 4: This program has no syntax or run time errors, but it certainly has a
logic error. This logic error may not be easy to find. Most logic errors
create a challenge for the programmer. Your instructor may ask you not to
worry about finding and correcting the problem at this time.

*/
