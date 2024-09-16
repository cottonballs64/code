// MICAH STRADLING

/*
Option 3: The University of Guiness charges $3000 per semester for in-state
tuition and $4500 per semester for out-of-state tuition. In addition, room
and board is $2500 per semester for in-state students and $3500 per
semester for out-of-state students. Write a program that prompts the user
for their residential status (i.e., in-state or out-of-state) and whether they
require room and board (Y or N). The program should then compute and
output their bill for that semester.
Use the sample output below:
Sample Run 1:
Please input "I" if you are in-state or "O" if you are out-of-state:
I
Please input "Y" if you require room and board and "N" if you do not:
N
Your total bill for this semester is $3000
Sample Run 2:
Please input "I" if you are in-state or "O" if you are out-of-state:
O
Please input "Y" if you require room and board and "N" if you do not:
Y
Your total bill for this semester is $8000
*/

#include <iostream>
using namespace std;

int main()

{
const int IN_STATE_SEMESTER_COST = 3000, OUT_STATE_SEMESTER_COST = 4500, IN_STATE_ROOM_BOARD_COST = 2500, OUT_STATE_ROOM_BOARD_COST = 3500;
int totalBillSemester;
char stateInOutSelection, roomBoardSelection;

cout << "This program creats a bill for this semester at the University of Guiness based on your residence.\n";
cout << "Please input I if you are an in-state student or O if you are an out-of-state student.\n";
cin >> stateInOutSelection;
cout << "Please input Y if you require room and board or input N if you do not.\n";
cin >> roomBoardSelection;

switch (stateInOutSelection)
{
case 'I':
case 'i':
    switch (roomBoardSelection)
    {
    case 'Y':
    case 'y':
        totalBillSemester = IN_STATE_SEMESTER_COST + IN_STATE_ROOM_BOARD_COST;
        break;
    
    case 'N':
    case 'n':
        totalBillSemester = IN_STATE_SEMESTER_COST;
        break;
    }
    cout << "Your total bill for this semester is $" << totalBillSemester << endl;
    break;
case 'O':
case 'o':
    switch (roomBoardSelection)
    {
    case 'Y':
    case 'y':
        totalBillSemester = OUT_STATE_SEMESTER_COST + OUT_STATE_ROOM_BOARD_COST;
        break;
    
    case 'N':
    case 'n':
        totalBillSemester = OUT_STATE_SEMESTER_COST;
        break;
    }
    cout << "Your total bill for this semester is $" << totalBillSemester << endl;
    break;
}
return 0;
}

