// This program will input the value of two sides of a right triangle and then determine the size of the hypotenuse.
// MICAH STRADLING

#include <iostream>
#include <cmath> // needed for math functions like sqrt()
#include <iomanip>
using namespace std;
int main()
{
float a,b; // the smaller two sides of the triangle
float hyp; // the hypotenuse calculated by the program
cout << "Please input the value of the two sides with a space between them" << endl;
cin >> a >> b;
hyp = sqrt(pow(a,2) + pow(b,2)); // Fill in the assignment statement that determines the hypotenuse
cout << "The sides of the right triangle are " << a << " and " << b << endl;
cout << setprecision(2) << fixed << "The hypotenuse is " << hyp << endl; // Exercise 2
return 0;
}