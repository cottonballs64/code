/*
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

// This program will read in the quarterly sales transactions for a given number
// of years. It will print the year and transactions in a table format.
// It will calculate year and quarter total transactions.
// MICAH STRADLING

#include <iostream>
#include <iomanip>
using namespace std;
const int MAXYEAR = 10;
const int MAXCOL = 5;
typedef int SalesType[MAXYEAR][MAXCOL]; // creates a new 2D integer data type
void getSales(SalesType, int&); // places sales figures into the array
void printSales(SalesType, int); // prints data as a table
void printTableHeading(); // prints table heading
int main()
    {
    int yearsUsed; // holds the number of years used
    SalesType sales; // 2D array holding
    // the sales transactions
    getSales(sales, yearsUsed); // calls getSales to put data in array
    printTableHeading(); // calls procedure to print the heading
    printSales(sales, yearsUsed); // calls printSales to display table
    return 0;
    }
//*****************************************************************************
// printTableHeading
// task: This procedure prints the table heading
// data in: none
// data out: none
//
//*****************************************************************************
void printTableHeading()
    {
    cout << setw(30) << "YEARLY QUARTERLY SALES" << endl << endl << endl;
    cout << setw(10) << "YEAR" << setw(10) << "Quarter 1"
    << setw(10) << "Quarter 2" << setw(10) << "Quarter 3"
    << setw(10) << "Quarter 4" << endl;
    }
//*****************************************************************************
// getSales
//
// task: This procedure asks the user to input the number of years.
// For each of those years it asks the user to input the year
// (e.g. 2004), followed by the sales figures for each of the
// 4 quarters of that year. That data is placed in a 2D array
// data in: a 2D array of integers
// data out: the total number of years
//
//*****************************************************************************
void getSales(SalesType table, int& numOfYears)
    {
    cout << "Please input the number of years (1-" << MAXYEAR << ')' << endl;
    cin >> numOfYears;
    // Fill in the code to read and store the next value
    for (int year = 0; year < numOfYears; year++)
    {
        for (int col = 0; col < MAXCOL; col++)
        {
            if (col == 0)
            {
            cout << "Input the year for the next set of data: ";
            cin >> table[year][col];
            }
            else
            {
            cout << "Input the sales for Q" << col << ": ";
            cin >> table[year][col];
            }
        }
    }
    cout << endl;
    }
//*****************************************************************************
// printSales
//
// task: This procedure prints out the information in the array
// data in: an array containing sales information
// data out: none
//
//*****************************************************************************
void printSales(SalesType table, int numOfYears)
    {
    // Fill in the code to print the table
    for (int year = 0; year < numOfYears; year++)
    {
        for (int col = 0; col < MAXCOL; col++)
        {
            cout << setw(10) << table[year][col];
        }
        cout << endl;
    }
    }

/*
Fill in the code for both getSales and printSales.
This is similar to the price.cpp program in Exercise 1; however, the
code will be different. This is a table that contains something other than
sales in column one.

Exercise 7: Run the program so that the chart from Exercise 6 is printed
            YEARLY QUARTERLY SALES


      YEAR Quarter 1 Quarter 2 Quarter 3 Quarter 4
      2000        72        80        60       100
      2001        82        90        43        98
      2002        64        78        58        84
*/