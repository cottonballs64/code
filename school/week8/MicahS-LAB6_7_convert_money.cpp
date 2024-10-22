#include <iostream>
#include <iomanip>
using namespace std;
// This program will input American money and convert it to foreign currency
// MICAH STRADLING

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

const float EUROSRATE = 1.06, PESOSRATE = 9.73, YENRATE= 124.35;

int main ()
{
    float dollars;
    float euros;
    float pesos;
    float yen;
    cout << fixed << showpoint << setprecision(2);
    cout << "Please input the amount of American Dollars you want converted "
    << endl;
    cout << "to euros and pesos" << endl;
    cin >> dollars;
    // Fill in the code to call convertMulti with parameters dollars, euros, and pesos
    convertMulti(dollars, euros, pesos);

    // Fill in the code to output the value of those dollars converted to both euros
    // and pesos
    cout << dollars << " dollars would be equivalent to " << euros << " euros." << endl;
    cout << dollars << " dollars would be equivalent to " << pesos << " pesos." << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to euros, pesos and yen" << endl;
    cin >> dollars;
    // Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
    convertMulti(dollars, euros, pesos, yen);

    // Fill in the code to output the value of those dollars converted to euros,
    // pesos and yen
    cout << dollars << " dollars would be equivalent to " << euros << " euros." << endl;
    cout << dollars << " dollars would be equivalent to " << pesos << " pesos." << endl;
    cout << dollars << " dollars would be equivalent to " << yen << " yen." << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to yen" <<endl;
    cin >> dollars;
    // Fill in the code to call convertToYen
    convertToYen(dollars);

    // Fill in the code to output the value of those dollars converted to yen
    cout << dollars << " dollars would be equivalent to " << convertToYen(dollars) << " yen." << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << " to euros" << endl;
    cin >> dollars;
    // Fill in the code to call convertToEuros
    convertToEuros(dollars);

    // Fill in the code to output the value of those dollars converted to euros
    cout << dollars << " dollars would be equivalent to " << convertToEuros(dollars) << " euros." << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << " to pesos " << endl;
    cin >> dollars;
    // Fill in the code to call convertToPesos
    convertToPesos(dollars);

    // Fill in the code to output the value of those dollars converted to pesos
    cout << dollars << " dollars would be equivalent to " << convertToPesos(dollars) << " pesos." << endl;

    return 0;
}
// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly
// **************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros
// and pesos
// data in: dollars
// data out: euros and pesos
//
// *************************************************************************
void convertMulti(float dollars, float& euros, float& pesos)
{
    /* STUB
    cout << "The function convertMulti with dollars, euros and pesos " << endl
    << " was called with " << dollars << " dollars" << endl << endl;
    */

    euros = dollars * EUROSRATE;
    pesos = dollars * PESOSRATE;
}
// ************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros
// pesos and yen
// data in: dollars
// data out: euros pesos yen
//
// ***********************************************************************
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
    /* STUB
    cout << "The function convertMulti with dollars, euros, pesos and yen" << endl
    << " was called with " << dollars << " dollars" << endl << endl;
    */

    euros = dollars * EUROSRATE;
    pesos = dollars * PESOSRATE;
    yen = dollars * YENRATE;
}
// ****************************************************************************
// convertToYen
//
// task: This function takes a dollar value and converts it to yen
// data in: dollars
// data returned: yen
//
// ***************************************************************************
float convertToYen(float dollars)
{
    /* STUB
    cout << "The function convertToYen was called with " << dollars <<" dollars"
    << endl << endl;
    */

    float yen = dollars * YENRATE;
    return yen;
}
// ****************************************************************************
// convertToEuros
//
// task: This function takes a dollar value and converts it to euros
// data in: dollars
// data returned: euros
//
// ***************************************************************************
float convertToEuros(float dollars)
{
    /* STUB
    cout << "The function convertToEuros was called with " << dollars
    << " dollars" << endl << endl;
    */

    float euros = dollars * EUROSRATE;
    return euros;
}
// *****************************************************************************
// convertToPesos
//
// task: This function takes a dollar value and converts it to pesos
// data in: dollars
// data returned: pesos
//
// ****************************************************************************
float convertToPesos(float dollars)
{
    /* STUB
    cout << "The function convertToPesos was called with " << dollars
    << " dollars" << endl;
    */
   
    float pesos = dollars * PESOSRATE;
    return pesos;
}

/*
Exercise 1: Run this program and observe the results. You can input anything
that you like for the dollars to be converted. Notice that it has stubs as
well as overloaded functions. Study the stubs carefully. Notice that in this
case the value returning functions always return 0.

Exercise 2: Complete the program by turning all the stubs into workable
functions. Be sure to call true functions differently than procedures. Make
sure that functions return the converted dollars into the proper currency.
Although the exchange rates vary from day to day, use the following
conversion chart for the program. These values should be defined as
constants in the global section so that any change in the exchange rate can
be made there and nowhere else in the program.
One Dollar = 1.06 euros
9.73 pesos
124.35 yen
*/