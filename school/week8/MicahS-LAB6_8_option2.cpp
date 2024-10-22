/*
MICAH STRADLING

Option 2: Write a program that will input the number of wins and losses that a
baseball team acquired during a complete season. The wins should be
input in a parameter-less value returning function that returns the wins to
the main function. A similar function should do the same thing for the
losses. A third value returning function calculates the percentage of wins.
It receives the wins and losses as parameters and returns the percentage
(float) to the main program which then prints the result. The percentage
should be printed as a percent to two decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int win();
int loss();
float winRate(int wins, int losses);

int main(){
    float rate;
    cout << "This program calculates the win rate of the season.\n";
    rate = winRate(win(), loss());
    cout << fixed << setprecision(2) <<"The win rate was: " << rate << "%" << endl;
    return 0;
}

int win(){
int wins;
cout << "Please enter the number of wins this season:\n";
cin >> wins;
return wins;
}

int loss(){
int losses;
cout << "Please enter the number of losses this season:\n";
cin >> losses;
return losses;
}

float winRate(int wins, int losses){
    float winRate = 100 * static_cast<float>(wins) / (wins + losses);
    return winRate;
}
