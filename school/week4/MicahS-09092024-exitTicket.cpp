#include <iostream>
#include <cstdlib>
using namespace std;

const int dieRollMax = 6, dieRollMin = 1;

int main() {

srand(time(0));

/*
Inputs:
die1, die2, sum, Max, Min

Outputs:
The roll of die1
The roll of die2
The sum of both die added together

Process:
Assign a random number to die1
Assign a random number to die2
Add die1 to die2
Output results to user
*/

int dieRoll1 = (rand() % (dieRollMax - dieRollMin + 1) + dieRollMin), dieRoll2 = (rand() % (dieRollMax - dieRollMin + 1) + dieRollMin), dieRollSum;

cout << "This program simulates the rolling of two dice and will caclulate the sum of the both rolls.\n";
cout << "Die roll 1 is: " << dieRoll1 << endl;
cout << "Die roll 2 is: " << dieRoll2 << endl;
dieRollSum = (dieRoll1 + dieRoll2);
cout << "The sum of the two die rolls is: " << dieRollSum;
}
