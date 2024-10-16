// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.
// MICAH STRADLING

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream dataIn; // defines an input stream for a data file
    ofstream dataOut; // defines an output stream for an output file
    int quantity; // contains the amount of items purchased
    float itemPrice; // contains the price of each item
    float totalBill; // contains the total bill, i.e. the price of all items
    dataIn.open("transaction.dat"); // This opens the file.
    dataOut.open("bill.out");
    // Fill in the appropriate code in the blank below
    dataOut << setprecision(2) << fixed << showpoint; // formatted output
    dataIn >> quantity >> itemPrice;// Fill in the input statement that brings in the
    // quantity and price of the item
    totalBill = quantity * itemPrice;// Fill in the assignment statement that determines the total bill.
    dataOut << "The total bill is $" << totalBill << endl;// Fill in the output statement that prints the total bill, with a label,
    // to an output file
    return 0;
}

/*
Exercise 1: Notice that this is an altered version of Lab 3.1. This program gets
the information from a file and places the output to a file. You must
create the data file. Your instructor will tell you how to create the data file
and where to put it. Create a data file called transaction.dat that has the
following information:
22
10.98



Exercise 2: Fill in the blank and the statements that will read the data from the
file and print the following to bill.out:
The total bill is $241.56



*/
