/*
<Rummy Rules>

Win Condition
{
    Get 500 points first
}

Point Values
{
    Rank(0) = 20 pts;
    Rank(1-7) = 5 pts;
    Rank(10-12) = 10 pts;
    Rank(13) = 15 pts;
    Rank(11)Suit(3) = 40 pts;
    Bonus = 50 pts to total;
        If 1st time laying any cards and you discard your final card to end turn
}

Run options
{
    3 in a row
    3 of a kind
}

Actions On Turn
{
    {
        Draw from Deck
            Lay down card for points
                Play min of 3 from hand
                Play from hand off already played cards
            Discard
    }
    {
        Draw from Discard
            Draw card on top
                Keep in hand
                Play card with two others
            Draw deeper card
                Play card with two others
                Play card off already played cards
    }
}




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
