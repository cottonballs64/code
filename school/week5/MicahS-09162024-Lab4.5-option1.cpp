// MICAH STRADLING

/*
Option 1: Write a program that prompts the user for their quarterly water bill
for the last four quarters. The program should find and output their
average monthly water bill. If the average bill exceeds $75, the output
should include a message indicating that too much water is being used. If
the average bill is at least $25 but no more than $75, the output should
indicate that a typical amount of water is being used. Finally, if the
average bill is less than $25, the output should contain a message praising
the user for conserving water. Use the sample run below as a model for
your output.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double waterBillQuarter1, waterBillQuarter2, waterBillQuarter3, waterBillQuarter4, averageMonthlyBill;

cout << "This program will find and output your average monthly water bill\n";
cout << "Please input your water bill for quarter 1\n";
cin >> waterBillQuarter1;
cout << "Please input your water bill for quarter 2\n";
cin >> waterBillQuarter2;
cout << "Please input your water bill for quarter 3\n";
cin >> waterBillQuarter3;
cout << "Please input your water bill for quarter 4\n";
cin >> waterBillQuarter4;

averageMonthlyBill = (waterBillQuarter1 + waterBillQuarter2 + waterBillQuarter3 + waterBillQuarter4) / 4;
cout << setprecision(2) << fixed << "Your average monthly bill is $" << averageMonthlyBill << endl;
if (averageMonthlyBill > 75)
{cout << "You are using excessive amounts of water\n";}
else if (averageMonthlyBill > 25 && averageMonthlyBill <= 75)
{cout << "You are using a typical amount of water\n";}
else
cout << "Looks like you are conserving water. Great work!\n";

return 0;
}

