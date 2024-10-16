/*
Arrays are collections of things
Arrays have a type
Arrays are ordered, lists
Defining an array:
    Type of array
        To determine how much memory needs to be allocated
    Size of array (must declare in C++)
        Must be defined with an actual amount, can't be a variable unless set as a constant
    Order of array - Index value
        Index 0 to n-1

*/
#include <iostream>
using namespace std;


string getSuitName(int suitNum);

void suitTester();

int main() {

return 0;

}

string getSuitName(int suitNum){
    string suits[4] = {"Spades", "Clubs", "Diamonds", "Hearts"};
    int safeSuitNum = suitNum % 4;
    return suits[safeSuitNum];
}

void suiteTest(){
    for (int suitIndex = 0; suitIndex < 4; suitIndex++)
    {
    }
    
}