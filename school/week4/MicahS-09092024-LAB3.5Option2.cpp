// MICAH STRADLING

/*
Option 2: The Woody furniture company sells the following three styles of chairs:

Style: American Colonial
Price per chair: $85.00

Style: Modern
Price per chair: $57.50

Style: French Classical
Price per chair: $127.75

Write a program that will input the amount of chairs sold for each style. It
will print the total dollar sales of each style as well as the total sales of all
chairs in fixed point notation with two decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int qtySold1, qtySold2, qtySold3;
double price1 = 85.00, price2 = 57.50, price3 = 127.75, totalStyle1, totalStyle2, totalStyle3, totalAllStyles;
string style1 = "American Colonial", style2 = "Modern", style3 = "French Classical";

// Prompt and input of number of chairs sold for each style
cout << "How many " << style1 << " chairs were sold?\n";
cin >> qtySold1;
cout << "How many " << style2 << " chairs were sold?\n";
cin >> qtySold2;
cout << "How many " << style3 << " chairs were sold?\n";
cin >> qtySold3;

// Calculate the totals
totalStyle1 = qtySold1 * price1;
totalStyle2 = qtySold2 * price2;
totalStyle3 = qtySold3 * price3;
totalAllStyles = totalStyle1 + totalStyle2 + totalStyle3;
//Output the sales totals to the user
cout << fixed << setprecision(2) << "The total sales of " << style1 << " chairs was $" << totalStyle1 << endl;
cout << "The total sales of " << style2 << " chairs was $" << totalStyle2 << endl;
cout << "The total sales of " << style3 << " chairs was $" << totalStyle3 << endl;
cout << "The total sales of all chairs was $" << totalAllStyles << endl;
return 0;
}
