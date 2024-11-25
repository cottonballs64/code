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

struct Card {
    int rank;
    int suit;
    const string rankType[13]={"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    const string suitType[4]={"Spades", "Clubs", "Diamonds", "Hearts"};
};

vector<Card> initializeDeck();
Card draw(vector<Card> &Deck);
void printCard(Card);

int main() {
    srand(time(0));
    vector<Card> CurrentDeck = initializeDeck();
    Card YourCard = draw(CurrentDeck);
    printCard(YourCard);
    return 0;
}

vector<Card> initializeDeck(){
    vector<Card> newDeck;
    for (int i = 0; i < 52; i++)
    {
        Card card;
        card.rank=(i%13);
        card.suit=(i % 4);
        newDeck.push_back(card);
    }
    return newDeck;
}

Card draw(vector<Card> &Deck){
    int draw = (rand() % (52 - 1 + 1));
    Card drawnCard = Deck[draw];
    return drawnCard;
}
void printCard( Card card){
    cout << "You drew the " << card.rankType[card.rank] << " of " << card.suitType[card.suit] << endl;
}
