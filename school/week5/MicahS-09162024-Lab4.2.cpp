// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// MICAH STRADLING

// Exercise 1 & 2
/*
#include <iostream>
using namespace std;

int main()

{
float average; // holds the grade average
cout << "Input your average:" << endl;
cin >> average;
if (average >= 60) // Exercise 1 correction
{cout << "You Pass" << endl;}
else // Exercise 2
cout << "You Fail" << endl;
return 0;
}
*/

/*
Exercise 1: Run the program three times using 80 (you pass), 55 (you fail) and 60 for the average.
What happens when you input 60 as the average? (Nothing happens) Modify the first if
statement so that the program will also print “You Pass” if the average
equals 60.

Exercise 2: Modify the program so that it uses an if/else statement rather
than two if statements.


Exercise 3: Modify the program from Exercise 2 to allow the following categories: Invalid data (data above 100), ‘A’ category (90–100), ‘B’ category
(80–89), “You Pass” category (60–79), “You Fail” category (0–59).
What will happen to your program if you enter a negative value such as -12? (You fail)
*/

// Exercise 3
#include <iostream>
using namespace std;

int main()

{
float average; // holds the grade average
cout << "Input your average:" << endl;
cin >> average;
if (average > 100) // Invalid case
{cout << "Invalid data (data above 100)" << endl;}
else if (average >= 90) // A
{cout << "A" << endl;}
else if (average >= 80) // B
{cout << "B" << endl;}
else if (average >= 60) // You Pass
{cout << "You pass" << endl;}
else // You fail
cout << "You Fail" << endl;
return 0;
}
