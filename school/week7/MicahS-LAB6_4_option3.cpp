/*
MICAH STRADLING

Option 3: Write a program that will read in grades, the number of which is
also input by the user. The program will find the sum of those grades and
pass it, along with the number of grades, to a function which has a “pass
by reference” parameter that will contain the numeric average of those
grades as processed by the function. The main function will then determine the letter grade of that average based on a 10-point scale.
90–100 A
80–89 B
70–79 C
60–69 D
0–59 F
*/

#include <iostream>
#include <iomanip>
using namespace std;

void readGrades(float&);

int main() {
float averageScore;
cout << fixed << setprecision(2); // I just like it to look cleaner
readGrades(averageScore);
cout << "The average score for all grades was: " << averageScore << endl;
if (averageScore >= 90)
{
    cout << "You got an A! Nice work." << endl;
}
else if (averageScore >= 80)
{
    cout << "You got a B. Not too shabby." << endl;
}
else if (averageScore >= 70)
{
    cout << "You got a C. Good enough." << endl;
}
else if (averageScore >= 60)
{
    cout << "You got a D. Better luck next time." << endl;
}
else if (averageScore < 60)
{
    cout << "You got an F! Big OOF!" << endl;
}

return 0;
}

void readGrades(float& average){
    float grade, total = 0;
    int count = 0;
    cout << "Please enter all the grades received for the class. Enter -1 when finished\n";
    do
    {
        cin >> grade;
        total += grade;
        count++;
        if (grade == -1) // To undo the count and total changes made when the user enters the sentry value. Sorry if this is messy
        {
        count--;
        total += 1;
        }
        
    } while (grade != -1);

    average = static_cast<float>(total) / count;
}
