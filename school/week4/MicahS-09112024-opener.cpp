/*
Write a C++ program that:
chooses a random integer between 1 and 10 and assigns that value to a variable called answer
prompts the user for an integer between 1 and 10
stores the user's input in an integer variable called guess
displays the user's guess and the answer to the console.
*/
#include <iostream>
using namespace std;

int main() {
srand(time(0));

int guess, answerMax = 10, answerMin = 1, answer = (rand() % (answerMax - answerMin + 1) + answerMin);

cout << "This program generates a random number between 1 and 10. Please enter a guess as to which number will be generated.\n";
cin >> guess;
cout << "You guessed the number: " << guess << endl << "The number generated was: " << answer << endl;
}