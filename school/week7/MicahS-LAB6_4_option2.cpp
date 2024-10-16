/*
MICAH STRADLING

Option 2: Write a program that will input miles traveled and hours spent in
travel. The program will determine miles per hour. This calculation must
be done in a function other than main; however, main will print the
calculation. The function will thus have 3 parameters: miles, hours, and
milesPerHour. Which parameter(s) are pass by value and which are
passed by reference? Output is fixed with 2 decimal point precision.
    The miles and hours variables will be passed by value since they are used within the function itself,
    but since the MPH output is in main, it will need to be passed by reference instead.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void calculateMilesPerHour(float, float, float&);

int main() {
    float milesTraveled, hoursTraveled, milesPerHour;
    cout << fixed << setprecision(2);
    cout << "How many miles were traveled? Enter a number:" << endl;
    cin >> milesTraveled;
    cout << "How many hours did it take to travel that far? Enter a number:" << endl;
    cin >> hoursTraveled;
    calculateMilesPerHour(milesTraveled, hoursTraveled, milesPerHour);
    cout << "The average miles per hour for the trip was: " << milesPerHour << endl;
    cout << "Thanks for using the program.\n";
}

void calculateMilesPerHour(float miles, float hours, float& MPH){
MPH = miles / hours;
}