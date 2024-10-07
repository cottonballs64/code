// This program takes two numbers (payRate & hours)
// and multiplies them to get grosspay.
// It then calculates net pay by subtracting 15%
//MICAH STRADLING

#include <iostream>
#include <iomanip>
using namespace std;
//Function prototypes
void printDescription();
void computePaycheck(float, int, float&, float&);

int main()
{
float payRate;
float grossPay;
float netPay;
int hours;
cout << setprecision(2) << fixed;
cout << "Welcome to the Pay Roll Program" << endl;
printDescription(); //Call to Description function
cout << "Please input the pay per hour" << endl;
cin >> payRate;
cout << endl << "Please input the number of hours worked" << endl;
cin >> hours;
cout << endl << endl;
computePaycheck(payRate,hours,grossPay,netPay);
// Fill in the code to output grossPay
// cout << "The gross pay is $" << grossPay << endl;
// cout << "The net pay is $" << netPay << endl;
cout << "We hope you enjoyed this program" << endl;
return 0;
}
// ********************************************************************
// printDescription
//
// task: This function prints a program description
// data in: none
// data out: no actual parameter altered
//
// ********************************************************************
void printDescription() // The function heading
{
cout << "************************************************" << endl << endl;
cout << "This program takes two numbers (payRate & hours)" << endl;
cout << "and multiplies them to get gross pay " << endl;
cout << "it then calculates net pay by subtracting 15%" << endl;
cout << "************************************************" << endl << endl;
}
// *********************************************************************
// computePaycheck
//
// task: This function takes rate and time and multiples them to
// get gross pay and then finds net pay by subtracting 15%.
// data in: pay rate and time in hours worked
// data out: the gross and net pay
//
// ********************************************************************
void computePaycheck(float rate, int time, float& gross, float& net)
{
// Fill in the code to find gross pay and net pay
gross = rate * time;
net = gross - (gross * 0.15);
cout << "The gross pay is $" << gross << endl; // Exercise 4
cout << "The net pay is $" << net << endl; // Exercise 4
}

/*
Exercise 1: Fill in the code (places in bold) and note that the function
computePaycheck determines the net pay by subtracting 15% from the gross
pay. Both gross and net are returned to the main() function where those
values are printed.
Exercise 2: Compile and run your program with the following data and make
sure you get the output shown.
Exercise 3: Are the parameters gross and net, in the modified calPaycheck
func- tion you created in Exercise 1 above, pass by value or pass by
reference?
    Pass by reference
    
Exercise 4: Alter the program so that gross and net are printed in the function
compute computePaycheck instead of in main(). The main() function executes
the statement
cout << "We hoped you enjoyed this program" << endl;
after the return from the function calPaycheck.
Exercise 5: Run the program again using the data from Exercise 2. You should
get the same results. All parameters should now be passed by value.
*/