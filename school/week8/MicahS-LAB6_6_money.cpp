#include <iostream>
#include <iomanip>
using namespace std;
// MICAH STRADLING
void normalizeMoney(float& dollars, int cents = 150);
// This function takes cents as an integer and converts it to dollars
// and cents. The default value for cents is 150 which is converted
// to 1.50 and stored in dollars
int main()
{
    int cents;
    float dollars;
    cout << setprecision(2) << fixed << showpoint;
    cents = 95;
    cout << "\n We will now add 95 cents to our dollar total\n";
    // Fill in the code to call normalizeMoney to add 95 cents
    normalizeMoney(dollars, cents); // Using the defined cents variable for 95

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
    cout << "\n We will now add 193 cents to our dollar total\n";
    // Fill in the code to call normalizeMoney to add 193 cents
     normalizeMoney(dollars, 193);

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
    cout << "\n We will now add the default value to our dollar total\n";
    // Fill in the code to call normalizeMoney to add the default value of cents
    normalizeMoney(dollars); // Not adding the variable makes it use the default option set in the header

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
    return 0;
}
// *******************************************************************************
// normalizeMoney
//
// task: This function is given a value in cents. It will convert cents
// to dollars and cents which is stored in a local variable called
// total which is sent back to the calling function through the
// parameter dollars. It will keep a running total of all the money
// processed in a local static variable called sum.
//
// data in: cents which is an integer
// data out: dollars (which alters the corresponding actual parameter)
//
// *******************************************************************************
void normalizeMoney(float& dollars, int cents)
{
    float total=0;
    // Fill in the definition of sum as a static local variable
    static float sum = 0.0;
    
    // Fill in the code to convert cents to dollars
    dollars = cents * 0.01;

    total = total + dollars;
    sum = sum + dollars;
    cout << "We have added another $" << dollars <<" to our total" << endl;
    cout << "Our total so far is $" << sum << endl;
    cout << "The value of our local variable total is $" << total << endl;
}

/*
Exercise 1: You will notice that the function has to be completed. This function
will take cents and convert it to dollars. It also keeps a running total of
all the money it has processed. Assuming that the function is complete,
write out what you expect the program will print.
    We will now add 95 cents to our dollar total
    We have added another $0.95 to our total
    Our total so far is $0.95
    The value of our local variable total is $0.95
    Converting cents to dollars resulted in 0.95 dollars

    We will now add 193 cents to our dollar total
    We have added another $1.93 to our total
    Our total so far is $2.88
    The value of our local variable total is $1.93
    Converting cents to dollars resulted in 1.93 dollars

    We will now add the default value to our dollar total
    We have added another $1.50 to our total
    Our total so far is $4.38
    The value of our local variable total is $1.50
    Converting cents to dollars resulted in 1.50 dollars


Exercise 2: Complete the function. Fill in the blank space to define sum and
then write the code to convert cents to dollars. Example: 789 cents
would convert to 7.89. Compile and run the program to get the expected
results. Think about how sum should be defined.
*/