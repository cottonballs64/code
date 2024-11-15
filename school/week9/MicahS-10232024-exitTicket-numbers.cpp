/*
Create an array of integers.  
Prompt the user to enter an integer five times and store each entry in the array.
After five numbers have been entered, report the max, the min, and average.
*/
#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 5;
int numbers[SIZE], minNum, maxNum;
double aveNum, sumNum = 0;

int main() {
cout << "This program collects 5 integers and provides the minimum value, the maximum value, and the average of all values." << endl;
for (int i = 0; i < SIZE; i++)
{
    cout << "Enter number " << (i+1) << ": ";
    cin >> numbers[i];
    sumNum = sumNum + numbers[i];
}
aveNum = (sumNum / SIZE);

minNum = numbers[0];
maxNum = numbers[0];
for (int i = 0; i < SIZE; i++)
{
    if (minNum > numbers[i])
    {
        minNum = numbers[i];
    }
    if (maxNum < numbers[i])
    {
        maxNum = numbers[i];
    }
}
cout << "Minimum: " << minNum << endl;
cout << "Maximum: " << maxNum << endl;
cout << "Average: " << aveNum << endl;

return 0;
}
