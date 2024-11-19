// This program shows how the toupper and tolower functions can be
// applied in a C++ program
// MICAH STRADLING

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
    int week, total, dollars;
    float average;
    char choice;
    cout << showpoint << fixed << setprecision(2);
    do
    {
    total = 0;
    for(week = 1; week <= 4; week++)
    {
    cout << "How much (to the nearest dollar) did you"
    << " spend on food during week " << week
    << " ?:" << endl;
    cin >> dollars;
    total = total + dollars;
    }
    average = total / 4.0;
    cout << "Your weekly food bill over the chosen month is $"
    << average << endl << endl;
    do
    {
    cout << "Would you like to find the average for "
    << "another month?";
    cout << endl << "Enter Y or N" << endl;
    cin >> choice;
    } while(tolower(choice) != 'y' && tolower(choice) != 'n');
    } while (tolower(choice) == 'y');
    return 0;
}

/*
Exercise 1: Run the program several times with various inputs.
    Done

Exercise 2: Notice the following do-while loop which appears near the end of
the program:
    do
    {
    cout << "Would you like to find the average for another month?";
    cout << endl << "Enter Y or N" << endl;
    cin >> choice;
    } while(toupper(choice) != 'Y' && toupper(choice) != 'N');

How would the execution of the program be different if we removed this
loop? Try removing the loop but leave the following lines in the program:
cout << "Would you like to find the average for another month?";
cout << endl << "Enter Y or N" << endl;
cin >> choice;
Record what happens when you run the new version of the program.
    The removed section of code error corrects for the user inputting anything other that y, Y, n, or N in their response
    Removing it makes it so if the user enters anything other than y or Y, then they automatically end the program

Exercise 3: Alter program case_convert.cpp so that it performs the same task
but uses tolower rather than toupper.
    Done, changed above
*/
