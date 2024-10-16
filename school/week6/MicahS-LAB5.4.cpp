// This program finds the average time spent programming by a student
// each day over a three day period.
// MICAH STRADLING

#include <iostream>

using namespace std;

int main()
{
    int numStudents;
    string subject;
    float numHoursProgram, numHoursBiology, biologyTotal, programTotal, programAverage, biologyAverage;
    int student,day = 0, numDays; // these are the counters for the loops
    cout << "This program will find the average number of hours a day"
    << " that a student spent programming and studying biology over a period of days\n\n";

    cout << "How many students are there?" << endl << endl;
    cin >> numStudents;

    cout << "How many days would you like to average?\n" << endl;
    cin >> numDays; // Exercise 1 change

    for(student = 1; student <= numStudents; student++)
        {
        programTotal = 0, biologyTotal = 0;
        for(day = 1; day <= numDays; day++)
            {
            cout << "Please enter the number of hours worked by student "
            << student <<" while programming on day " << day << "." << endl;
            cin >> numHoursProgram;
            programTotal = programTotal + numHoursProgram;
            cout << "Please enter the number of hours worked by student " // Exercise 2 change
            << student <<" while studying biology on day " << day << "." << endl;
            cin >> numHoursBiology;
            biologyTotal = biologyTotal + numHoursBiology;
            }
        programAverage = programTotal / numDays;
        biologyAverage = biologyTotal / numDays;        
        cout << endl;
        cout << "The average number of hours per day spent programming by "
        << "student " << student << " is " << programAverage << endl;
        cout << "The average number of hours per day spent studying biology by "
        << "student " << student << " is " << biologyAverage << endl;
        if (programAverage > biologyAverage)
        {
            subject = "programming";
        }
        else if (biologyAverage > programAverage)
        {
            subject = "studying biology";
        }
        if (biologyAverage == programAverage)
        {
            cout << "Student " << student << " spent the same amount of time studying biology as they did programming during the time period averaged." << endl;
        }
        else
        cout << "Student " << student << " spent more time " << subject << " during the time period averaged."<< endl;
        }
    return 0;
}

/*
Exercise 1: Note that the inner loop of this program is always executed exactly
three times—once for each day of the long weekend. Modify the code so
that the inner loop iterates n times, where n is a positive integer input by
the user. In other words, let the user decide how many days to consider
just as they choose how many students to consider
    variable set as numDays


Exercise 2: Modify the program from Exercise 1 so that it also finds the average
number of hours per day that a given student studies biology as well as
programming. For each given student include two prompts, one for each
subject. Have the program print out which subject the student, on average,
spent the most time on.


*/