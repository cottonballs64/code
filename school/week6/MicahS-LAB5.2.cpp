// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.
// MICAH STRADLING

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// Fill in the code to define an integer variable called number,
int number;
// a floating point variable called cost,
float cost;
// and a character variable called beverage
char beverage;

bool validBeverage;
cout << fixed << showpoint << setprecision(2);
do {
    cout << endl << endl;
    cout << "Hot Beverage Menu" << endl << endl;
    cout << "A: Coffee $1.00" << endl;
    cout << "B: Tea $ .75" << endl;
    cout << "C: Hot Chocolate $1.25" << endl;
    cout << "D: Cappuccino $2.50" << endl << endl << endl;
    cout << "Enter the beverage A,B,C, or D you desire" << endl;
    cout << "Enter E to exit the program" << endl << endl;
    // Fill in the code to read in beverage
    cin >> beverage;
    switch(beverage)
        {
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D': validBeverage = true;
        break;
        default: validBeverage = false;
        }
    if (validBeverage == true)
        {
        cout << "How many cups would you like?" << endl;
        // Fill in the code to read in number
        cin >> number;
        }
    // Fill in the code to begin a switch statement
    // that is controlled by beverage
    switch (beverage)
        {
        case 'a':
        case 'A': cost = number * 1.0;
        cout << "The total cost is $ " << cost << endl;
        break;
        // Fill in the code to give the case for hot chocolate ($1.25 a cup)
        case 'b':
        case 'B': cost = number * 1.25;
        cout << "The total cost is $ " << cost << endl;
        break;
        // Fill in the code to give the case for tea ( $0.75 a cup)
        case 'c':
        case 'C': cost = number * 0.75;
        cout << "The total cost is $ " << cost << endl;
        break;
        // Fill in the code to give the case for cappuccino ($2.50 a cup)
        case 'd':
        case 'D': cost = number * 2.50;
        cout << "The total cost is $ " << cost << endl;
        break;
        case 'e':
        case 'E': cout << "Please come again" << endl;
        break;
        // Fill in the code to write a message indicating an invalid selection.
        default : cout << "Looks like you've made an invalid input." << endl;
        cout << "Try again please" << endl;
        }
// Fill in the code to finish the do-while statement with the
// condition that beverage does not equal E or e.
} while ((beverage != 'e') || (beverage != 'E'));
// Fill in the appropriate return statement
return 0;}

/*
Exercise 1: Fill in the indicated code to complete the above program. Then
compile and run the program several times with various inputs. Try all the
possible relevant cases and record your results.


Exercise 2: What do you think will happen if you do not enter A, B, C, D
or E? Try running the program and inputting another letter.
    The first switch defaults to false
    Because the validBeverage is false, it does not ask for number of cups
    In the second switch it defaults to alert the user to an invalid input.
    It then loops the user back to the start of the loop and starts the program again

Exercise 3: Replace the line
if (validBeverage == true)
with the line
if (validBeverage)
and run the program again. Are there any differences in the execution of
the program? Why or why not?
    It seems to run the same way. The condition is a boolean and will check to see if the value is true, so it works the same way.


*/
