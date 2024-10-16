/*
Write a C++ program that declares a string variable, suit.  
Then, the program should loop through the numbers 1-4.  
In the body of the loop, include a switch statement that uses an integer to set the value of a string variable, suit. 
1 -> "Spades", 2-> "Clubs", 3 -> "Diamonds", 4 -> "Hearts", and then prints out the result.
*/
#include <iostream>
using namespace std;

int main() {

string suit, rank;
    for (int suitCount = 1; suitCount <= 4; suitCount++) {
    switch (suitCount)
    {
    case 1 : suit = "Spades";
        break;
    case 2 : suit = "Clubs";
        break; 
    case 3 : suit = "Diamonds";
        break;
    case 4 : suit = "Hearts";    
        break;   
    }
for (int rankCount = 1; rankCount <= 13; rankCount++) {

    switch (rankCount)
    {
    case 1 : rank = "Ace";
        break;
    case 11 : rank = "Jack";    
        break;   
    case 12 : rank = "Queen";    
        break;
    case 13 : rank = "King";    
        break;   
    default : rank = to_string(rankCount);
        break;
    }
    cout << "The " << rank << " of " << suit << "." << endl;
}
}
}
