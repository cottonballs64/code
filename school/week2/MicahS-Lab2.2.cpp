// This program will output the circumference and area
// of the circle with a given radius.
// MICAH STRADLING
#include <iostream>
using namespace std;
const double PI = 3.14;
const double RADIUS = 5.4;
int main()
{
int area; // definition of area of circle
int circumference; // definition of circumference
circumference = 2 * PI * RADIUS; // computes circumference
area = PI * (RADIUS * RADIUS); // computes area
cout << "The circumference of the circle is " << circumference << ".\n"; // Fill in the code for the cout statement that will output (with description) the circumference
cout << "The area of the circle is " << area << ".\n" ;// Fill in the code for the cout statement that will output (with description) the area of the circle
return 0;
}

/*
Exercise 1: Bring in the file circlearea.cpp from the Lab 2 folder. 

Exercise 2: Fill in the blanks and the cout statements so that the output willproduce the following:

The circumference of the circle is 33.912.
The area of the circle is 91.5624.

Exercise 3: Change the data type of circumference from float to int. Run theprogram and record the results.

The circumference of the circle is 33.
The area of the circle is 91.

Explain what happened to get the above results.
The decimal points are getting rounded off when the double is converted to an integer
*/
