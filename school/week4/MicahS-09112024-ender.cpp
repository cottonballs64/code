/*
Modify your opener:
The program chooses a number between 1 and 10.
The user guesses a number.
If that guess is equal to the number, print the message, "Winner, winner, chicken dinner!"
If the guess is lower than the number, print the message, "Rise up, my friend, your guess was too low."  
If the guess is higher than the number, print the message, "Get low, get low, get low, your guess was too high."
No matter what they guess, print out the answer and the guess at the end.
*/
#include <iostream>
using namespace std;

int main() {
srand(time(0));

int guess, answerMax = 10, answerMin = 1, answer = (rand() % (answerMax - answerMin + 1) + answerMin);

cout << "This program generates a random number between 1 and 10. Please enter a guess as to which number will be generated.\n";
cin >> guess;

if (guess == answer) {
    cout << "Winner, winner, chicken dinner!\n";
}
else if (guess < answer) {
    cout << "Rise up, my friend, your guess was too low.\n";
}
else if (guess > answer) {
    cout << "Get low, get low, get low, your guess was too high.\n";
};

cout << "You guessed the number: " << guess << endl << "The number generated was: " << answer << endl;
}