#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// MICAH STRADLING

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions{
    float length;
    float width;
};

// Exercise 2, placed above the rectangle structure
struct results{
    float area;
    float perimeter;
};

// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct rectangle{
    results attributes;
    dimensions sizes;
};

// Exercise 3 Prototypes
float calcArea(float, float);
float calcPerimeter(float, float);

int main()
{
    // Fill in code to define a rectangle structure variable named box.
    rectangle box;
    cout << "Enter the length of a rectangle: ";
    // Fill in code to read in the length to the appropriate location
    cin >> box.sizes.length;
    cout << "Enter the width of a rectangle: ";
    // Fill in code to read in the width to the appropriate location
    cin >> box.sizes.width;
    cout << endl << endl;
    // Fill in code to compute the area and store it in the appropriate
    // location
    box.attributes.area = calcArea(box.sizes.length, box.sizes.width);
    // Fill in code to compute the perimeter and store it in the
    // appropriate location
    box.attributes.perimeter = calcPerimeter(box.sizes.length, box.sizes.width);
    cout << fixed << showpoint << setprecision(2);
    cout << "The area of the rectangle is " << box.attributes.area << endl;
    cout << "The perimeter of the rectangle is " << box.attributes.perimeter
    << endl;
    return 0;
}

// Exercise 3 Functions
float calcArea(float length, float width){
    float area = length * width;
    return area;
}

float calcPerimeter(float length, float width){
    float perimeter = (2*length) + (2*width);
    return perimeter;
}

/*
Exercise 1: Fill in the code as indicated by the comments in bold.
    Done
Exercise 2: Modify the program above by adding a third structure named
results which has two members area and perimeter. Adjust the rectangle structure so that both of its members are structure variables.
    Done
Exercise 3: Modify the program above by adding functions that compute the
area and perimeter. The structure variables should be passed as arguments
to the functions.
    Done

*/
