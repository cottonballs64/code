/*
getSuit
Create a function,
string getSuitName(int suitNum);
that returns a string corresponding to the suit in a deck of cards.  Use an array to convert an integer between 0 and 3 to "Spades", "Clubs", "Diamonds", "Hearts".  
Create another function called suitTester() that prints out the suits for the numbers 0 through 3.

getRank
Create a function,
string getRankName(int rankNum);
that returns a string corresponding to the rank in a deck of cards.  Use an array to convert an integer between 0 and 12 to "Ace", "2", "3", etc.  
Create another function called rankTester() that prints out the ranks for the numbers 0 through 12.

initializeDeck
Create a function that assembles an array of strings that represents a deck of cards.  Use a global array of size 52 called deck to store the strings. 
string deck[52];
void initializeDeck();
Use the getRankName and getSuitName functions to create the individual cards in the deck.
Create another function called deckTester() that calls the initializeDeck function and then loops through the contents printing each card to the screen.
*/
#include <iostream>
using namespace std;

string deck[52];

string getSuit(int);
string getRank(int);
void initializeDeck();

void suitTester();
void rankTester();
void deckTester();

int main() {
    deckTester();
    return 0;
}

string getSuit(int suitNum){
    string suit[4] = {"Spades", "Clubs", "Diamonds", "Hearts"};
    int safeSuitNum = suitNum % 4;
    return suit[safeSuitNum];
}

string getRank(int rankNum){
    string rank[13] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    int saferankNum = rankNum % 13;
    return rank[saferankNum];
}

void initializeDeck(){
    int cardIndex = 0;
    for (int suit = 0; suit < 4; suit++)
    {
        for (int rank = 0; rank < 13; rank++)
        {
            deck[cardIndex] = ("the " + getRank(rank) + " of " + getSuit(suit));
            cardIndex++;
        }
    }
}

void suitTester(){
    for (int suitIndex = 0; suitIndex < 4; suitIndex++)
    {
        cout << getSuit(suitIndex);
    }
}

void rankTester(){
    for (int rankIndex = 0; rankIndex < 13; rankIndex++)
    {
        cout << getRank(rankIndex) << endl;
    }
}

void deckTester(){
    initializeDeck();
    for (int card = 0; card < 52; card++)
    {
        cout << "This card was " << deck[card] << endl;
    }    
}
