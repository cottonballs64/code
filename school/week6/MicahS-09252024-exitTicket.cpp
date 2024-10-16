/*
Write a C++ program that reads the file "nums.txt" attached to this item in Blackboard.
Read in all the numbers in the file, display them, and then print out the average.
(Beware integer division!)

With int division:

The sum of all the numbers is: 2335
The average of the nums file is: 23

With doubles:
The sum of all the numbers is: 2335
The average of the nums file is: 23.35

*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

double num, sum = 0, numCount = 0, average;

ifstream input;
input.open("nums.txt");
while (input >> num)
{
    numCount++;
    cout << num << endl;
    sum += num;
}

cout << "The sum of all the numbers is: " << sum << endl;
average = sum / numCount;
cout << "The average of the nums file is: " << average << endl;
    
input.close();
    
}
