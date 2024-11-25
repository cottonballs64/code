// MICAH STRADLING
/*
Option 2: Write a program that uses a structure to store the following information for a particular month at the local airport:
Total number of planes that landed
Total number of planes that departed
Greatest number of planes that landed in a given day that month
Least number of planes that landed in a given day that month

The program should have an array of twelve structures to hold travel information
for the entire year. The program should prompt the user to enter data for each
month. Once all data is entered, the program should calculate and output the average monthly number of landing planes, the average monthly number of departing planes, the total number of landing and departing planes for the year, and the
greatest and least number of planes that landed on any one day (and which
month it occurredin).
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct monthPlanes {
    int totalLanded;
    int totalDeparted;
    int maxLandPerDay;
    int minLandPerDay;
};

const int NUM_MONTHS = 12;
const int NUM_PROMPTS = 4;
const string MONTHNAMES[NUM_MONTHS] = {"January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December"};
const string requestOutput[NUM_PROMPTS]={"Enter the total number of planes that landed in month ",
    "Enter the total number of planes that departed in month ",
    "Enter the largest number of planes that landed on a single day in month ",
    "Enter the lowest number of planes that landed on a single day in month "
    };

int promptUserInfo(int, int);
void monthlyResults(monthPlanes[],int);
void yearlyReuslts(monthPlanes[]);
void inputData(monthPlanes[]);
void explanation();

int main()
{
    // Initialize variables and array
    monthPlanes travelInfo[NUM_MONTHS]={};

    // Select method for entering data
    inputData(travelInfo);

    // Print Results
    cout << endl << endl;
    for (int index = 0; index < NUM_MONTHS; index++)
    {
        monthlyResults(travelInfo, index);
    }
    yearlyReuslts(travelInfo);
    return 0;
}

// Function to allow user to choose between two input methods
void inputData(monthPlanes info[]){
            for (int index = 0; index < NUM_MONTHS; index++)
                {
                    int promptNum = 0;
                    info[index].totalLanded = promptUserInfo(index, promptNum++);
                    info[index].totalDeparted = promptUserInfo(index, promptNum++);
                    info[index].maxLandPerDay = promptUserInfo(index, promptNum++);
                    info[index].minLandPerDay = promptUserInfo(index, promptNum++);
                }
        }

// Function to request data from user as an int
int promptUserInfo(int index, int prompt){
    int request;
    cout << requestOutput[prompt] << MONTHNAMES[index] << ": ";
    cin >> request;
    return request;
}

// Echo function to take in each month's data and output this information to the user
void monthlyResults(monthPlanes data[], int index){
    cout << setw(30) << "Data for month " << MONTHNAMES[index] << ":" << endl << endl;
    cout << setw(10) << "Total Planes Landed: " << data[index].totalLanded << endl;
    cout << setw(10) << "Total Planes Departed: " << data[index].totalDeparted << endl;
    cout << setw(10) << "Most Planes Landed in Month: " << data[index].maxLandPerDay << endl;
    cout << setw(10) << "Least Planes Landed in Month: " << data[index].minLandPerDay << endl << endl;
}

// Function to take in all stored monthly data, calculate a yearly total, and output this information to the user
void yearlyReuslts(monthPlanes info[]){
    int max = info[0].minLandPerDay, min = info[0].minLandPerDay, maxMonth = 0, minMonth = 0, totalLanded = 0, totalDeparted = 0;
    double averageLanded, averageDeparted;
    for (int month = 0; month < NUM_MONTHS; month++)
    {
        // Calculate Total Landed & Ave Landed
        totalLanded += info[month].totalLanded;
        averageLanded = totalLanded / static_cast<double>(NUM_MONTHS);
        // Calculate Total Departed & Ave Departed
        totalDeparted += info[month].totalDeparted;
        averageDeparted = totalDeparted / static_cast<double>(NUM_MONTHS);
        // Calculate Max Month for Landings
        if (max < info[month].maxLandPerDay)
        {
            max = info[month].maxLandPerDay;
            maxMonth = month;
        };
        // Calculate Min Month for Landings
        if (min > info[month].minLandPerDay)
        {
            min = info[month].minLandPerDay;
            minMonth = month;
        };
    }

    // Print Results
    cout << setw(30) << "Results for the Year:" << endl << endl;

    cout << setw(10) << "Average Planes Landed Per Month: " << averageLanded << endl;
    cout << setw(10) << "Average Planes Departed Per Month: " << averageDeparted << endl << endl;

    cout << setw(10) << "Total Planes Landed: " << totalLanded << endl;
    cout << setw(10) << "Total Planes Departed: " << totalDeparted << endl << endl;
    
    cout << setw(10) << "Most Planes Landed: " << max << " in " << MONTHNAMES[maxMonth] << endl;
    cout << setw(10) << "Least Planes Landed: " << min << " in " << MONTHNAMES[minMonth] << endl << endl;
}

