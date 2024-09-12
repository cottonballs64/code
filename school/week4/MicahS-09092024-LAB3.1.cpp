// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to the screen.
// MICAH STRADLING

/*
Exercise 1 reuslts 'The total for the bill is 241.56'
Exercise 2 results 'The total for the bill is 2.4e+02' - fixed sets the number to show where the decimal actually is in the number instead of scientific notation
Exercise 3 results 'The total for the bill is 241.5600' - setprecision defines how many significant digits to display
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
int quantity; // contains the amount of items purchased
float itemPrice; // contains the price of each item
float totalBill; // contains the total bill.
string itemName;
cout << setprecision(2) << fixed << showpoint; // formatted output
cout << "Please input the name of the item\n";
getline(cin, itemName);
cout << "Please input the number of items bought\n";
// Fill in the input statement to bring in the quantity.
cin >> quantity;
// Fill in the prompt to ask for the price.
cout << "Please input the price of each item\n";
// Fill in the input statement to bring in the price of each item.
cin >> itemPrice;
// Fill in the assignment statement to determine the total bill.
totalBill = quantity * itemPrice;
// Fill in the output statement to print total bill,
cout << "The item that you bought is: " << itemName << endl << "The total bill is: $" << totalBill << endl;
// with a label to the screen.
return 0;
}
