/*
Create a struct Card which represents a playing card with a suit and value. 
In the main program, create a vector of Cards called Deck.
Create a function to initialize your deck and another to draw a card.
Create a function that prints out the card name, and then demonstrate the draw() function in main.
vector<Card> initializeDeck();
Card draw( vector<Card> &deck );
void printCard( Card card);
*/

#include <iostream>
#include <vector>
using namespace std;
const string rankType[13]={"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
const string suitType[4]={"Spades", "Clubs", "Diamonds", "Hearts"};

struct Card {
    int rank;
    int suit;
};

vector<Card> shuffleDeck();

int main() {
    srand(time(0));
    vector<Card> CurrentDeck = shuffleDeck();
    for (Card c : CurrentDeck)
    {
        cout << "You drew the " << rankType[c.rank] << " of " << suitType[c.suit] << endl;
    }
    return 0;
}

vector<Card> shuffleDeck(){
    vector<Card> newDeck;
    for (int i = 0; i < 52; i++)
    {
        Card card = {i % 13, i % 4};
        newDeck.push_back(card);
    }
    return newDeck;
}

