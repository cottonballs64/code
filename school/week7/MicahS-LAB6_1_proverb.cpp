// This program prints the proverb
// "Now is the time for all good men to come to the aid of their party"
// in a function (procedure) called writeProverb that is called by the main function
//MICAH STRADLING

#include <iostream>
using namespace std;
void writeProverb(); //This is the prototype for the writeProverb function
int main()
{
writeProverb();
return 0;
}
// *********************************************************************
// writeProverb
//
// task: This function prints a proverb
// data in: none
// data out: no actual parameter altered
//
// ********************************************************************
// Fill in the function heading and the body of the function that will print
// to the screen the proverb listed in the comments at the beginning of the
// program

void writeProverb() {
    cout << "Now is the time for all good men to come to the aid of their party" << endl;
};

/*
Exercise 1: Fill in the code (places in bold) so that the program will print out the
proverb listed in the comments at the beginning of the program. The
proverb will be printed by the function which is called by the main function
*/