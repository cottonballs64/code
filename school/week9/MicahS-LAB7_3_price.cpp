/*
Look at the following table containing prices of certain items:
12.78 23.78 45.67 12.67
7.83 4.89 5.99 56.84
13.67 34.84 16.71 50.89
These numbers can be read into a two-dimensional array.
Retrieve price.cpp from the Lab 7 folder. The code is as follows:
*/

// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.
// MICAH STRADLING


#include <iostream>
#include <iomanip>
using namespace std;
const MAXROWS = 10;
const MAXCOLS = 10;
typedef float PriceType[MAXROWS][MAXCOLS]; // creates a new data type
// of a 2D array of floats
void getPrices(PriceType, int&, int&); // gets the prices into the array
void printPrices(PriceType, int, int); // prints data as a table
int main()
    {
    int rowsUsed; // holds the number of rows used
    int colsUsed; // holds the number of columns used
    PriceType priceTable; // a 2D array holding the prices
    getPrices(priceTable, rowsUsed, colsUsed); // calls getPrices to fill the array
    printPrices(priceTable, rowsUsed, colsUsed);// calls printPrices to display array
    return 0;
    }
//*******************************************************************************
// getPrices
//
// task: This procedure asks the user to input the number of rows and
// columns. It then asks the user to input (rows * columns) number of
// prices. The data is placed in the array.
// data in: none
// data out: an array filled with numbers and the number of rows
// and columns used.
//
//*******************************************************************************
void getPrices(PriceType table, int& numOfRows, int& numOfCols)
    {
    cout << "Please input the number of rows from 1 to "<< MAXROWS << endl;
    cin >> numOfRows;
    cout << "Please input the number of columns from 1 to "<< MAXCOLS << endl;
    cin >> numOfCols;
    for (int row = 0; row < numOfRows; row++)
        {
        for (int col = 0; col < numOfCols; col++)
        // Fill in the code to read and store the next value in the array
        }
    }
//***************************************************************************
// printPrices
//
// task: This procedure prints the table of prices
// data in: an array of floating point numbers and the number of rows
// and columns used.
// data out: none
//
//****************************************************************************
void printPrices(PriceType table, int numOfRows, int numOfCols)
    {
    cout << fixed << showpoint << setprecision(2);
    for (int row = 0; row < numOfRows; row++)
        {
        for (int col = 0; col < numOfCols; col++)
        // Fill in the code to print the table
        }
    }

/*
Exercise 1: Fill in the code to complete both functions getPrices and
printPrices, then run the program with the following data:
Exercise 2: Why does getPrices have the parameters numOfRows and
numOfCols passed by reference whereas printPrices has those parameters
passed by value?
Exercise 3: The following code is a function that returns the highest price in
the array. After studying it very carefully, place the function in the above
program and have the program print out the highest value.
float findHighestPrice(PriceType table, int numOfRows, int numOfCols)
// This function returns the highest price in the array
{
float highestPrice;
highestPrice = table[0][0]; // make first element the highest price
for (int row = 0; row < numOfRows; row++)
for (int col = 0; col < numOfCols; col++)
if ( highestPrice < table[row][col] )
highestPrice = table[row][col];
return highestPrice;
}
NOTE: This is a value returning function. Be sure to include its prototype
in the global section.
Exercise 4: Create another value returning function that finds the lowest price
in the array and have the program print that value.
Exercise 5: After completing all the exercises above, run the program again
with the values from Exercise 1 and record your results.
Exercise 6: (Optional) Look at the following table that contains quarterly sales
transactions for three years of a small company. Each of the quarterly
transactions are integers (number of sales) and the year is also an integer.
YEAR Quarter 1 Quarter 2 Quarter 3 Quarter 4
2000 72 80 60 100
2001 82 90 43 98
2002 64 78 58 84
We could use a two-dimensional array consisting of 3 rows and 5 columns.
Even though there are only four quarters we need 5 columns (the first
column holds the year).
*/