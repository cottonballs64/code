/*
Look at the following table containing prices of certain items:
12.78       23.78       45.67       12.67
7.83        4.89        5.99        56.84
13.67       34.84       16.71      50.89

These numbers can be read into a two-dimensional array.
Retrieve price.cpp from the Lab 7 folder. The code is as follows:
*/

// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.
// MICAH STRADLING


#include <iostream>
#include <iomanip>
using namespace std;
const int MAXROWS = 10;
const int MAXCOLS = 10;
typedef float PriceType[MAXROWS][MAXCOLS]; // creates a new data type
// of a 2D array of floats
void getPrices(PriceType, int&, int&); // gets the prices into the array
void printPrices(PriceType, int, int); // prints data as a table
float findHighestPrice(PriceType, int, int);
float findLowestPrice(PriceType, int, int);

int main()
    {
    int rowsUsed; // holds the number of rows used
    int colsUsed; // holds the number of columns used
    PriceType priceTable; // a 2D array holding the prices
    getPrices(priceTable, rowsUsed, colsUsed); // calls getPrices to fill the array
    printPrices(priceTable, rowsUsed, colsUsed);// calls printPrices to display array
    float hightestPrice = findHighestPrice(priceTable, rowsUsed, colsUsed);
    cout << "The highest price was " << hightestPrice << endl;
    float lowestPrice = findLowestPrice(priceTable, rowsUsed, colsUsed);
    cout << "The lowest price was " << lowestPrice << endl;
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
        {
            cout << "Please input the price of an item with 2 decimal places: " << endl;
            cin >> table[row][col];
        }
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
        {
            cout << setw(10) << table[row][col];
        }
        cout << endl;
        }
    }

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

float findLowestPrice(PriceType table, int numOfRows, int numOfCols)

// This function returns the lowest price in the array
{
float lowestPrice;
lowestPrice = table[0][0]; // make first element the lowest price
for (int row = 0; row < numOfRows; row++)
for (int col = 0; col < numOfCols; col++)
if ( lowestPrice > table[row][col] )
lowestPrice = table[row][col];
return lowestPrice;
}

/*
Exercise 1: Fill in the code to complete both functions getPrices and
printPrices, then run the program with the following data:
    (Done)

Exercise 2: Why does getPrices have the parameters numOfRows and
numOfCols passed by reference whereas printPrices has those parameters
passed by value?
    The getPrices function is assigning values to the locations in the array,
    the printPrices function is simply calling for the stored data in the memory address called

Exercise 3: The following code is a function that returns the highest price in
the array. After studying it very carefully, place the function in the above
program and have the program print out the highest value.
float findHighestPrice(PriceType table, int numOfRows, int numOfCols)
    (Done)

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
    (Done)

Exercise 5: After completing all the exercises above, run the program again
with the values from Exercise 1 and record your results.
    Please input the number of rows from 1 to 10
2
Please input the number of columns from 1 to 10
3
Please input the price of an item with 2 decimal places: 
1.45
Please input the price of an item with 2 decimal places: 
2.56
Please input the price of an item with 2 decimal places: 
12.98
Please input the price of an item with 2 decimal places: 
37.86
Please input the price of an item with 2 decimal places: 
102.34
Please input the price of an item with 2 decimal places: 
67.89
1.45    2.56    12.98    
37.86    102.34    67.89    
The highest price was 102.34
The lowest price was 1.45
*/
