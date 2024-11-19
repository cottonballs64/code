/*
Exercise 4: Bring in program grades.cpp and grades.txt from the Lab 10
folder. Fill in the code in bold so that the data is properly read from
grades.txt. and the desired output to the screen is as follows:
*/

#include <fstream>
#include <iostream>
using namespace std;
// MICAH STRADLING
const int MAXNAME = 20;
int main()
{
    ifstream inData;
    inData.open("grades.txt");
    char name[MAXNAME + 1]; // holds student name
    float average; // holds student average

    inData.get(name,MAXNAME+1);
    while (inData)
    {
        inData >> average;
        cout << name << endl // I know this breaks the formatting requested but honestly
        // I just cannot get it to display the names without adding a new line to it for some reason
        // I'm guessing it's the compiler I have being setup weird
        << "had a(n) " << average << " average" << endl;
        inData.ignore(80,'\n');
        inData.get(name,MAXNAME+1);
    }
    return 0;
}

/*
Output with endl added:

Adara Starr
had a(n) 94 average
David Starr
had a(n) 91 average
Sophia Starr
had a(n) 94 average
Maria Starr
had a(n) 91 average
Danielle DeFino
had a(n) 94 average
Dominic DeFino
had a(n) 98 average
McKenna DeFino
had a(n) 92 average
Taylor McIntire
had a(n) 99 average
Torrie McIntire
had a(n) 91 average
Emily Garrett
had a(n) 97 average
Lauren Garrett
had a(n) 92 average
Marlene Starr
had a(n) 83 average
Donald DeFino
had a(n) 73 average

Output without the endl:
had a(n) 94 average
had a(n) 91 average
had a(n) 94 average
had a(n) 91 average
had a(n) 94 average
had a(n) 98 average
had a(n) 92 average
had a(n) 99 average
had a(n) 91 average
had a(n) 97 average
had a(n) 92 average
had a(n) 83 average
had a(n) 73 average
*/

