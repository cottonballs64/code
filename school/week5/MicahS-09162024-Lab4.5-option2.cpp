// MICAH STRADLING

/*
Option 2: The local t-shirt shop sells shirts that retail for $12. Quantity discounts are given as follow:
Number of Shirts Discount
5–10 10%
11–20 15%
21–30 20%
31 or more 25%
Write a program that prompts the user for the number of shirts required
and then computes the total price. Make sure the program accepts only
nonnegative input.
Use the following sample runs to guide you:
Sample Run 1:
How many shirts would you like ?
4
The cost per shirt is $12 and the total cost is $48
Sample Run 2:
How many shirts would you like ?
0
The cost per shirt is $12 and the total cost is $0
Sample Run 3:
How many shirts would you like ?
8
The cost per shirt is $10.80 and the total cost is $86.40
Sample Run 4:
How many shirts would you like ?
-2
Invalid Input: Please enter a nonnegative integer
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
const double PERCENT_OFF_25 = 0.75, PERCENT_OFF_20 = 0.80, PERCENT_OFF_15 = 0.85, PERCENT_OFF_10 = 0.90;

int shirtsOrdered;
double totalCost, costPerShirt;

cout << "How many shirts would you like to order?\n";
cin >> shirtsOrdered;

if (shirtsOrdered < 0)
{cout << "Please try again and enter a nonnegative integer\n";
return 0;
}
else if (shirtsOrdered >=0)
{
if(shirtsOrdered > 30)
{totalCost = shirtsOrdered * (costPerShirt = (12 * PERCENT_OFF_25));}
else if (shirtsOrdered >= 21)
{totalCost = shirtsOrdered * (costPerShirt = (12 * PERCENT_OFF_20));}
else if (shirtsOrdered >= 11)
{totalCost = shirtsOrdered * (costPerShirt = (12 * PERCENT_OFF_15));}
else if (shirtsOrdered >= 5)
{totalCost = shirtsOrdered * (costPerShirt = (12 * PERCENT_OFF_10));}
else
totalCost = shirtsOrdered * (costPerShirt = 12);

cout << setprecision(2) << fixed << "The cost per shirt is $" << costPerShirt << " and the total cost is $" << totalCost;
return 0;
}
}
