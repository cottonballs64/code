#include <iostream>
#include <iomanip>
using namespace std;
// This program uses a structure to hold data about a rectangle
// MICAH STRADLING

// Fill in code to declare a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats
struct Rectangle{
    float length;
    float width;
    float area;
    float perimeter;
    bool square;
};

int main()
{
    // Fill in code to define a rectangle variable named box
    Rectangle box;
    cout << "Enter the length of a rectangle: ";
    // Fill in code to read in the length member of box
    cin >> box.length;
    cout << "Enter the width of a rectangle: ";
    // Fill in code to read in the width member of box
    cin >> box.width;
    cout << endl << endl;
    // Fill in code to compute the area member of box
    box.area = box.width * box.length;
    // Fill in code to compute the perimeter member of box
    box.perimeter = ((2 * box.width) + (2 * box.length));
    cout << fixed << showpoint << setprecision(2);
    // Fill in code to output the area with an appropriate message
    cout << "The area of the rectangle is: " << box.area << endl;
    // Fill in code to output the perimeter with an appropriate message
    cout << "The perimeter of the rectangle is: " << box.perimeter << endl;

    // Exercise 2
    box.square = (box.length == box.width);
    if (box.square == true)
    {
        cout << "The rectangle is square." << endl;
    }
    else
    cout << "The rectangle is not square." << endl;    
    return 0;
}

/*
Exercise 1: Fill in the code as indicated by the comments in bold.
    Done
Exercise 2: Add code to the program above so that the modified program will
determine whether or not the rectangle entered by the user is a square.
    Done
*/
