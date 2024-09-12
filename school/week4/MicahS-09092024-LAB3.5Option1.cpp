// MICAH STRADLING

/*
Option 1: Write a program that will read in 3 grades from the keyboard and
will print the average (to 2 decimal places) of those grades to the screen. It
should include good prompts and labeled output. Use the examples from
the earlier labs to help you. You will want to begin with a design. The
Lesson Set 1 Pre-lab Reading Assignment gave an introduction for a design
similar to this problem. Notice in the sample run that the answer is stored
in fixed point notation with two decimal points of precision.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double grade1, grade2, grade3, aveGrade;
cout << "Please input the three grades with spaces between each one.\n\n";
cin >> grade1 >> grade2 >> grade3;
aveGrade = (grade1 + grade2 + grade3) / 3;
cout << setprecision(2) << fixed << "The average for all three grades is: " << aveGrade << endl;

return 0;
}
