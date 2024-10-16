/*
Write a C++ program with a function that takes four parameters:

double examGrade  // 50% of total grade

double labGrade  // 40% of total grade

double classGrade  // 5% of total grade

double RQGrade   // 5% of total grade

The function should calculate a weighted average and return a letter grade (char).

char calcGrade(double examGrade, double labGrade, double classGrade, double RQGrade)

Test the function out in main.
*/
#include <iostream>
using namespace std;

char calcGrade(double examGrade, double labGrade, double classGrade, double RQGrade);

int main() {
double examGrade, labGrade, classGrade, RQGrade;
cout << "Enter the following grades and  their weighted total will be calculated to give you your letter grade:\n";
cout << "Exam Grade:" << endl;
cin >> examGrade;
cout << "Lab Grade:" << endl;
cin >> labGrade;
cout << "Class Grade:" << endl;
cin >> classGrade;
cout << "RQ Grade:" << endl;
cin >> RQGrade;

cout << "Your grade was a " << calcGrade(examGrade, labGrade, classGrade, RQGrade) << endl;
return 0;
}

char calcGrade(double examGrade, double labGrade, double classGrade, double RQGrade){
char letterGrade;
double classAverage;
classAverage = ((examGrade * 0.50) + (labGrade * 0.40) + (classGrade * 0.05) + (RQGrade * 0.05))/1.0;
if (classAverage >= 90)
{
 letterGrade = 'A';
}
else if (classAverage >= 80)
{
    letterGrade = 'B';
}
else if (classAverage >= 70)
{
    letterGrade = 'C';
}
else if (classAverage >= 60)
{
    letterGrade = 'D';
}
else if (classAverage < 60)
{
    letterGrade = 'F';
}
return letterGrade;
}

