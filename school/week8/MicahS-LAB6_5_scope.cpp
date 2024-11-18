#include <iostream>
#include <iomanip>
using namespace std;
// This program will demonstrate the scope rules.
// MICAH STRADLING
const double PI = 3.14;
const double RATE = 0.25;
void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
    cout << fixed << showpoint << setprecision(2);
    float radius = 12;
    cout <<" Main function outer block" << endl;
    cout << " are active here" << endl << endl;
    {
        float area;
        cout << "Main function first inner block" << endl;
        cout << "area, radius, PI, RATE, findArea, findCircumference are active here" << endl << endl;
        // Fill in the code to call findArea here
        findArea(radius, area);
        cout << "The radius = " << radius << endl;
        cout << "The area = " << area << endl << endl;
    }
    {
        float radius = 10;
        float circumference;
        cout << "Main function second inner block" << endl;
        cout << "radius = 12(main), radius = 10(main inner2), PI, RATE, findArea, findCircumference are active here" << endl << endl;
        // Fill in the code to call findCircumference here
        findCircumference(radius, circumference);
        cout << "The radius = " << radius << endl;
        cout << "The circumference = " << circumference << endl << endl;
    }
    cout << "Main function after all the calls" << endl;
    cout << "radius = 12 (main), PI, RATE, findArea, findCircumference are active here" << endl << endl;
    return 0;
}
// *********************************************************************
// findArea
//
// task: This function finds the area of a circle given its radius
// data in: radius of a circle
// data out: answer (which alters the corresponding actual parameter)
//
// ********************************************************************
void findArea(float rad, float& answer)
{
    cout << "AREA FUNCTION" << endl << endl;
    cout << "rad(input), answer(output), PI, RATE, findArea, findCircumference are active here"<< endl << endl;
// FILL in the code, given that parameter rad contains the radius, that
// will find the area to be stored in answer
answer = PI * (rad * rad);
}
// ******************************************************************************
// findCircumference
//
// task: This function finds the circumference of a circle given its radius
// data in: radius of a circle
// data out: distance (which alters the corresponding actual parameter)
//
// *****************************************************************************
void findCircumference(float length, float& distance)
{
    cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
    cout << "length (input), distance (output), PI, RATE, findArea, findCircumference are active here" << endl << endl;
// FILL in the code, given that parameter length contains the radius,
// that will find the circumference to be stored in distance
distance = 2 * PI * length;
}

/*
Exercise 1: Fill in the following chart by listing the identifiers(function names,
variables, constants)

GLOBAL
    const double PI = 3.14;
    const double RATE = 0.25;
    void findArea(float, float&);
    void findCircumference(float, float&);

Main 
    float radius = 12;

Main (inner 1)
    float area;

Main (inner 2)
    float radius = 10;
    float circumference;

Area 
    void findArea(float rad, float& answer)

Circumference
    void findCircumference(float length, float& distance)

Exercise 2: For each cout instruction that reads:
cout << " LIST THE IDENTIFIERS THAT are active here" << endl;
Replace the words in all caps by a list of all identifiers active at that
location. Change it to have the following form:
cout << "area, radius and PI are active here" << endl;

Exercise 3: For each comment in bold, place the proper code to do what it
says.
NOTE: area = π r
2
circumference = 2πr

Exercise 4: Before compiling and running the program, write out what you
expect the output to be.
What value for radius will be passed by main (first inner block) to the
findArea function?

I expect radius to be sent as 12 there

What value for radius will be passed by main function (second inner
block) to the findCircumference function?

I expect radius to be sent as 10 there

Exercise 5: Compile and run your program. Your instructor may ask to see the
program run or obtain a hard copy.
*/