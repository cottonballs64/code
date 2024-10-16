/*
Option 1: Write a program that performs a survey tally on beverages. The
program should prompt for the next person until a sentinel value of –1 is
entered to terminate the program. Each person participating in the survey
should choose their favorite beverage from the following list:
1. Coffee 2. Tea 3. Coke 4. Orange Juice
MICAH STRADLING
*/

#include <iostream>

using namespace std;

int main() {

int beverage, coffeeCount = 0, teaCount = 0, cokeCount = 0, orangeJuiceCount = 0;

    cout << "This program is a survey tally of beverages." << endl;
    cout << "Please enter the beverages using the menu below." << endl;
    cout << endl << endl;
    cout << "Beverages:" << endl << endl;
    cout << "1: Coffee" << endl;
    cout << "2: Tea" << endl;
    cout << "3: Coke" << endl;
    cout << "4: Orange Juice" << endl << endl;
    cout << "Enter -1 to finish tallying." << endl << endl;
    while (beverage != -1)
    {
    cin >> beverage;
    switch(beverage)
        {
        case 1: cout << "Current running total for Coffees: " << ++coffeeCount << endl;
        cout << "Would you like to add another selection? Enter -1 to end the survey." << endl;
        break;
        case 2: cout << "Current running total for Teas: " << ++teaCount << endl;
        cout << "Would you like to add another selection? Enter -1 to end the survey." << endl;
        break;
        case 3: cout << "Current running total for Cokes: " << ++cokeCount << endl;
        cout << "Would you like to add another selection? Enter -1 to end the survey." << endl;
        break;
        case 4: cout << "Current running total for Orange Juices: " << ++orangeJuiceCount << endl;
        cout << "Would you like to add another selection? Enter -1 to end the survey." << endl;
        break;
        case -1: cout << "Thank you for taking the survey!" << endl << endl;
        break;
        default: cout << "Looks like you may have entered something incorrectly." << endl << endl;
        cout << "Here are the menu options again:" << endl;
        cout << "1: Coffee" << endl;
        cout << "2: Tea" << endl;
        cout << "3: Coke" << endl;
        cout << "4: Orange Juice" << endl << endl;
        cout << "Enter -1 to finish tallying." << endl << endl;
        }
    }
    cout << endl << endl << "The final results are:" << endl << endl;
    cout << "Coffees: " << coffeeCount << endl; 
    cout << "Teas: " << teaCount << endl; 
    cout << "Coke: " << cokeCount << endl; 
    cout << "Orange Juice: " << orangeJuiceCount << endl << endl; 
    return 0;
}
