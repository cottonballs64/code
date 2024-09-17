// This program will output the circumference and area
// of the circle with a given radius.
// MICAH STRADLING
#include <iostream>
using namespace std;
const int LENGTH = 8, WIDTH = 3;

int main()
{
int area, perimeter;
area = LENGTH * WIDTH; // computes area of a rectangle
perimeter = (2 * LENGTH) + (2 * WIDTH); // computes perimeter of a rectangle
cout << "The area of the rectangle is " << area << ".\n";
cout << "The perimeter of the rectangle is " << perimeter << ".\n";
return 0;
}

/*
Exercise 1: Using Lab 2.2 as an example, develop a program that will determine the area and perimeter of a rectangle. The length and width can be
given as constants. (LENGTH=8 WIDTH=3)

Exercise 2: Compile and run your program. Continue to work on it until you
get the following output.

*/
