// This program has the user input a number n and then finds the mean of the first n positive integers
// MICAH STRADLING

#include <iostream>

using namespace std;

int main()
{
    int MValue, NValue; // value is some positive number n
    int total = 0; // total holds the sum of the first n positive numbers
    int number; // the amount of numbers
    int count = 0; // used to calculate the mean later
    float mean; // the average of the first n positive numbers
    cout << "This program will calculate the mean of all the positive integers found between two numbers M and N" << endl;
    cout << "Please enter a positive integer for M" << endl;
    cin >> MValue;
    if (MValue > 0)
        {
        cout << "Please enter a positive integer for N" << endl;
        cout << "N must be greater than M" << endl;
        cin >> NValue;
        if (NValue > MValue)
        {
            for (number = MValue; number <= NValue; number++)
            {
            count++;
            total = total + number; // Could have probably removed the reference to number, but don't think it's a big deal to leave it in
            } // curly braces are optional since there is only one statement
        mean = static_cast<float>(total) / count; // note the use of the typecast
        // mean = (total) / value; // Exercise 1 testing without the static cast float
        // operator here
        cout << "Adding together the next " << (NValue - MValue)
        << " positive integers after " << MValue << " will give you a mean of " << mean << endl;
        }
        else
        cout << "Invalid input - N must be larger than M" << endl;
        }
    else
    cout << "Invalid input - integer must be positive" << endl;

    return 0;

}

/*
Exercise 1: Why is the typecast operator needed to compute the mean in the
statement mean = static_cast(float)(total)/value;? What do you think
will happen if it is removed? Modify the code and try it. Record what happens.
Make sure that you try both even and odd cases. Now put static_cast<float>
total back in the program.
    If it wasn't included, there would be integer division when
    calculating the mean and and decimal points would be dropped off

Exercise 2: What happens if you enter a float such as 2.99 instead of an integer
for value? Try it and record the results.
    It will round off the decimal and treat it as an integer instead still.
    2.99 is the same as entering 2

Exercise 3: Modify the code so that it computes the mean of the consecutive
positive integers n, n+1, n+2, . . . , m, where the user chooses n and m.
For example, if the user picks 3 and 9, then the program should find the
mean of 3, 4, 5, 6, 7, 8, and 9, which is 6.
    Shown above

*/
