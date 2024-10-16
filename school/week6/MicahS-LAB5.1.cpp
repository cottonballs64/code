// MICAH STRADLING

/*
#include <iostream>
using namespace std;
int main()
{
char letter = 'a';
do {
cout << "Please enter a letter. Entering the letter x will end the program" << endl;
cin >> letter;
cout << "The letter you entered is " << letter << endl;
}
while (letter != 'x');
cout << "Thanks for entering the correct letter!" << endl;
return 0;
}
*/

// Exercise 1: This program is not user friendly. Run it a few times and explain
// why.   
//     The user is not given context of what letter they're supposed to enter and they get no feedback
//     if they entered the correct one. When it is done, the program just ends.
// Exercise 2: Add to the code so that the program is more user friendly.
// Exercise 3: How would this code affect the execution of the program if the
// while loop is replaced by a do-while loop? Try it and see.
//    I didn't notice a difference in this case since it still waits for the user input before looping.
//    It could have changed if there was a counter showing how many times the user didn't enter x.









// MICAH STRADLING

#include <iostream>
using namespace std;
int main()
{
// Fill in the code to define and initialize to 1 the variable month
float total = 0, rain;
int month = 1;
cout << "Enter the total rainfall for month " << month << endl;
cout << "Enter -1 when you are finished" << endl;
// Fill in the code to read in the value for rain
cin >> rain;
// Fill in the code to start a while loop that iterates
// while rain does not equal -1
while (rain != -1)
{
// Fill in the code to update total by adding it to rain
total = total + rain;
// Fill in the code to increment month by one
month++;

cout << "Enter the total rainfall in inches for month "
<< month << endl;
cout << "Enter -1 when you are finished" << endl;
// Fill in the code to read in the value for rain
cin >> rain;
}
if (month == 1)
cout << "No data has been entered" << endl;
else
cout << "The total rainfall for the " << month-1
<< " months is "<< total << " inches." << endl;
return 0;
}

// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

// Exercise 4: Complete the program above by filling in the code described in the
// statements in bold so that it will perform the indicated task.

// Exercise 5: Run the program several times with various input. Record your
// results. Are they correct? What happens if you enter –1 first? What happens
// if you enter only values of 0 for one or more months? Is there any numerical data that you should not enter?
//    My results seem correct. If the user enters negative numebrs that aren't -1, then they can subtract from previous month's rain
//    That might be a good use case to account for

// Exercise 6: What is the purpose of the following code in the program above?
// if (month == 1)
// cout << "No data has been entered" << endl;
//    It gives the user an error if they enter -1 as their first input and the loop can't be used once.