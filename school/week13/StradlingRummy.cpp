/*
<Rummy Rules>

Win Condition
{
    Get 500 points first
}

Point Values
{
    // Rank(0)Wild(true) = 20 pts;
    // Rank(0)Wild(false) = 5 pts;
    // Rank(1-7) = 5 pts;
    // Rank(10-12) = 10 pts;
    // Rank(13) = 15 pts;
    // Rank(11)Suit(3) = 40 pts;
    Bonus = 50 pts to total;
        If 1st time laying any cards and you discard your final card to end turn
}

Valid play options
{
    3 in a row fromm the same suit
        Once a run has been played, the card above and below can be played on at any time
            If this position has been filled by a wild card, the position is blocked and cannot be played by the actual card anymore
    3 of a kind
        Once 3 of a kind has been played, one more card of the same kind can be played at anytime
            If this position has been filled by a wild card, the position is blocked and cannot be played by the actual card anymore
}

Actions On Turn
{
    {
        Draw from Deck
            Lay down card for points
                Play min of 3 from hand
                Play from hand off already played cards
                    If you empty your hand by playing, you are "floating" and it moves to the next player
            Discard
                If discard causes your hand to be empty, the game ends and points are calculated
    }
    {
        Draw from Discard
            Draw card on top
                Keep in hand
                    Discard
                        If discard causes your hand to be empty, the game ends and points are calculated
                Play card with two others
                    If you empty your hand by playing, you are "floating" and it moves to the next player
                    Discard
                        If discard causes your hand to be empty, the game ends and points are calculated
            Draw deeper card
                Play card with two others
                    If you empty your hand by playing, you are "floating" and it moves to the next player
                    Discard
                        If discard causes your hand to be empty, the game ends and points are calculated
                Play card off already played cards
                    If you empty your hand by playing, you are "floating" and it moves to the next player
                    Discard
                        If discard causes your hand to be empty, the game ends and points are calculated
    }
    {
    If no cards can be drawn, the game ends and points are calculated
    }
}


*/

#include <iostream>
#include <vector>
using namespace std;

struct Card {
    int rank;
    int suit;
    int value;
};

struct Player {
    int PlayerNum;
    int TotalPoints;
    int CurrentGamePoints;
    vector<Card> Hand; 
};

const int MAXPLAYER = 4;
const string rankType[13]={"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
const string suitType[4]={"Spades", "Clubs", "Diamonds", "Hearts"};
vector<Card> GameDeck;

void initGame();
vector<Player> initPlayers();
vector<Card> shuffleDeck(bool);
Card draw(vector<Card> &GameDeck);
void printCard(Card);
bool promptConfirmation();
bool wildSelection();


int main() {
    srand(time(0));
    initGame();
    return 0;
}

void initGame(){
    bool playAgain;
    do {
    bool wild = wildSelection();
    vector<Player> GamePlayers = initPlayers();
    GameDeck = shuffleDeck(wild);
    do {
        for (int index = 0; index < MAXPLAYER - 1; index++)
        {
            do {
                Card YourCard = draw(GameDeck);
                GamePlayers[index].Hand.push_back(YourCard);
                printCard(YourCard);
            } while (index < 7);
        }
    } while (GameDeck.size() > 0);
    playAgain = promptConfirmation();
    } while (playAgain == true);
}

/**************************************************************/
vector<Player> initPlayers(){
    vector<Player> GamePlayers;
    for (int player = 0; player < MAXPLAYER; player++)
    {
        Player User;
        User.PlayerNum = (player + 1);
        GamePlayers.push_back(User);
    }
    return GamePlayers;
}
/**************************************************************/

vector<Card> shuffleDeck(bool wild){
    vector<Card> newDeck;
    for (int i = 0; i < 52; i++)
    {
        Card card;
        card.rank=(i%13);
        card.suit=(i % 4);
        switch (card.rank)
        {
        case 0:
            if (wild == true)
            {
                card.value=20;
            }
            else
            card.value=5;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: 
            card.value=5;
            break;
        case 8:
        case 9:
        case 11:
            card.value=10;
            break;
        case 10:
            if (card.suit == 3)
            {
                card.value=40;
            }
            else
            card.value=10;
            break;
        case 12:
            card.value=15;
            break;
        default:
            card.value=0;
            break;
        }
        newDeck.push_back(card);
    }

    Card temp;
    for (int index = 0; index < 52; index++)
    {
        temp = newDeck[(rand() % ((52 - index) - 1 + 1))];
        newDeck[index] = temp;
    }
    return newDeck;
}

Card draw(vector<Card> &GameDeck){
    Card drawnCard = GameDeck[GameDeck.size()];
    GameDeck.pop_back();
    return drawnCard;
}

void printCard(Card card){
    cout << "You drew the " << rankType[card.rank] << " of " << suitType[card.suit] << " worth " << card.value << " points" << endl;
}

bool promptConfirmation(){
    char confirmation;
    do{
        cout << "(Enter Y or N)" << endl;
        cin >> confirmation;
    } while (toupper(confirmation) != 'Y' && toupper(confirmation) != 'N');
    if (toupper(confirmation) == 'Y')
    {
        return true;
    }
    else return false;
}

bool wildSelection(){
    cout << "Would you like to play with wild cards?" << endl << "Twos would be wild and worth 20 points" << endl;
    bool wild = promptConfirmation();
    return wild;
}
