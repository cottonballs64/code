// MICAH STRADLING

/*
Option 3: Write a program that will input total sales (sales plus tax) that a
business generates for a particular month. The program will also input the
state and local sales tax percentage. It will output the total sales plus the
state tax and local tax to be paid. The output should be in fixed notation
with 2 decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double TAX_STATE = 0.065, TAX_COUNTY = 0.005, TAX_CITY = 0.0175;

int main()
{
double sales, totalSales, stateTax, countyTax, cityTax, totalTax;

// Prompt for input
cout << "Please input the total sales the business earned this month:\n";
cin >> sales;

//Calculate totals
stateTax = sales * TAX_STATE;
countyTax= sales * TAX_COUNTY;
cityTax = sales * TAX_CITY;
totalTax = stateTax + countyTax + cityTax;
totalSales = sales + totalTax;

// Output information for user
cout << fixed << setprecision(2) << "The state tax applied to the sales this month was: $" << stateTax << endl;
cout << "The county tax applied to the sales this month was: $" << countyTax << endl;
cout << "The city tax applied to the sales this month was: $" << cityTax << endl;
cout << "The total tax applied to the sales this month was: $" << totalTax << endl;
cout << "The total sales for this month was: $" << totalSales << endl;
return 0;
}
