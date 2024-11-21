// MICAH STRADLING
/*
Option 1: Re-write Sample Program 11.2 so that it works for an array of
structures. Write the program so that it compares 6 circles. You will need
to come up with a new way of determining which circle’s center is closest
to the origin.
*/

#include <iostream>
#include <cmath> // necessary for pow function
#include <iomanip>
using namespace std;

struct circle // declares the structure circle
    { // This structure has 6 members
    float centerX; // x coordinate of center
    float centerY; // y coordinate of center
    float radius;
    float area;
    float circumference;
    float distance_from_origin;
    int circleNum; // Essentially just naming the circles
    };

const float PI = 3.14159;
const int NUM_CIRCLES = 6;

void bubbleSortArray(circle[], int);

int main()
    {
    circle circles[NUM_CIRCLES]; // defines 6 circle structure variables
    for (int i = 0; i < NUM_CIRCLES; i++)
    {
        // Data Input
        circles[i].circleNum=(i+1); // Marking the original order entered cause I'll need to sort it later
        cout << "Please enter the radius of circle" << circles[i].circleNum << ": ";
        cin >> circles[i].radius;
        cout << endl
        << "Please enter the x-coordinate of the center: ";
        cin >> circles[i].centerX;
        cout << endl
        << "Please enter the y-coordinate of the center: ";
        cin >> circles[i].centerY;
        circles[i].area = PI * pow(circles[i].radius, 2.0);
        circles[i].circumference = 2 * PI * circles[i].radius;
        circles[i].distance_from_origin = sqrt(pow(circles[i].centerX,2.0)
        + pow(circles[i].centerY,2.0));
        cout << endl << endl;
    }
    for (int i = 0; i < NUM_CIRCLES; i++)
    {
        cout << setprecision(2) << fixed << showpoint;
        cout << "The area of circle " << circles[i].circleNum << " is : ";
        cout << circles[i].area << endl;
        cout << "The circumference of circle " << circles[i].circleNum << " is: ";
        cout << circles[i].circumference << endl << endl;
    }

    bubbleSortArray(circles, NUM_CIRCLES);

    // This next section determines which circle's center is
    // closer to the origin
    for (int i = 0; i < NUM_CIRCLES; i++)
    {    
    cout << "The circle closest to the origin is circle " << circles[i].circleNum
    << " at a distance of " << circles[i].distance_from_origin << endl;
    }
    cout << endl << endl;
    return 0;
}

void bubbleSortArray(circle array[], int elems)
    {
    bool swap;
    circle temp;
    int bottom = elems - 1;
    do
        {
        swap = false;
        for (int count = 0; count < bottom; count++)
            {
            if (array[count].distance_from_origin > array[count+1].distance_from_origin)
                {
                temp = array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true;
                }
            }
        bottom--;
        } while(swap != false);
    }
