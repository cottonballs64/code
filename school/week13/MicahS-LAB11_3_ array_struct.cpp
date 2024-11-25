#include <iostream>
#include <iomanip>
using namespace std;
// This program demonstrates how to use an array of structures
// MICAH STRADLING

// Fill in code to declare a structure called taxPayer that has three
// members: taxRate, income, and taxes — each of type float
struct taxPayer{
    float taxRate;
    float income;
    float taxes;
};

const int CITIZENS = 5;
int main()
{
    // Fill in code to define an array named citizen which holds
    // 5 taxPayers structures
    taxPayer citizen[CITIZENS]={};
    cout << fixed << showpoint << setprecision(2);
    cout << "Please enter the annual income and tax rate for 5 tax payers: ";
    cout << endl << endl << endl;
    for(int count = 0;count < CITIZENS ;count++)
    {
        cout << "Enter this year's income for tax payer " << (count + 1);
        cout << ": ";
        // Fill in code to read in the income to the appropriate place
        cin >> citizen[count].income;
        cout << "Enter the tax rate for tax payer # " << (count + 1);
        cout << ": ";
        // Fill in code to read in the tax rate to the appropriate place
        cin >> citizen[count].taxRate;
        // Fill in code to compute the taxes for the citizen and store it
        // in the appropriate place
        citizen[count].taxes = citizen[count].income * citizen[count].taxRate;
        cout << endl;
        }
        cout << "Taxes due for this year: " << endl << endl;
        // Fill in code for the first line of a loop that will output the
        // tax information
        for (int index = 0; index < CITIZENS; index++)
        {
        cout << "Tax Payer # " << (index + 1) << ": " << "$ "
        << citizen[index].taxes << endl;
    }
    return 0;
}

/*
Exercise 1: Fill in the code as indicated by the comments in bold.
    Done
Exercise 2: In the previous code we have the following:
cout << "Tax Payer # " << (index+1) << ": " << "$ "
<< citizen[index].taxes << endl;
Why do you think we need (index+1) in the first line but index in the
second?
    The index is presumed to start at 0, so adding 1 to it will count up from 1 to 5
*/
