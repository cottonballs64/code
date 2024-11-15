/*
MICAH STRADLING

Option 2: Write a program that will input temperatures for consecutive days.
The program will store these values into an array and call a function that
will return the average of the temperatures. It will also call a function that
will return the highest temperature and a function that will return the
lowest temperature. The user will input the number of temperatures to be
read. There will be no more than 50 temperatures. Use typedef to declare
the array type. The average should be displayed to two decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXDAYS = 50;
typedef float TempType[MAXDAYS]; // create data type for array of temps

void getTemp(TempType, int&); // gets the temps into the array
float findAverageTemp(TempType, int);
float findHighestTemp(TempType, int);
float findLowestTemp(TempType, int);

int main()
    {
    int tempDays;
    TempType tempTable;

    cout << "This program takes in temperatures for up to " << MAXDAYS
    << " and calculates the average of all of them and provides the highest and lowest value." << endl;

    getTemp(tempTable, tempDays);
    float averageTemp = findAverageTemp(tempTable, tempDays);
    float hightestTemp = findHighestTemp(tempTable, tempDays);
    float lowestTemp = findLowestTemp(tempTable, tempDays);
    cout << "The average of all the temperatures was " << averageTemp << endl;
    cout << "The highest of all the temperatures was " << hightestTemp << endl;
    cout << "The lowest of all the temperatures was " << lowestTemp << endl;
    return 0;
    }

void getTemp(TempType table, int& tempDays)
    {
    cout << "How many temperatures would you like to calculate for? (Limit of " << MAXDAYS << ")" << endl;
    cin >> tempDays;
    while (tempDays > MAXDAYS)
    {
        cout << "The entered value was too high. Please enter a number below " << MAXDAYS << endl;
        cin >> tempDays;
    }
    for (int day = 0; day < tempDays; day++)
        {
            cout << "Please input the temperature for the day with up to 2 decimal places: " << endl;
            cin >> table[day];
        }
    }

float findAverageTemp(TempType table, int tempDays)

// This function returns the average temp of the array
{
float averageTemp;
averageTemp = 0;
for (int day = 0; day < tempDays; day++)
averageTemp += table[day];
averageTemp = averageTemp / tempDays;
return averageTemp;
}

float findHighestTemp(TempType table, int tempDays)

// This function returns the highest temp in the array
{
float highestTemp;
highestTemp = table[0];
for (int day = 0; day < tempDays; day++)
if ( highestTemp < table[day] )
highestTemp = table[day];
return highestTemp;
}

float findLowestTemp(TempType table, int tempDays)

// This function returns the lowest temp in the array
{
float lowestTemp;
lowestTemp = table[0];
for (int day = 0; day < tempDays; day++)
if ( lowestTemp > table[day] )
lowestTemp = table[day];
return lowestTemp;
}
