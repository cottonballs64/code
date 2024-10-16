/*
Write a function that collects a string from the user
Write a function that prints text out
Write a function called echo that takes input from a user and prints it back out
*/
#include <iostream>
using namespace std;

string userText;
string getText();

void printText(string inputText);

void echo();

int main() {
echo ();
return 0;
}

string getText(){
    string newText;
    cout << "Enter any text\n";
    getline(cin, newText);
    return newText;
}
void printText(string inputText){
    cout << inputText << endl;
}
void echo(){
    printText(getText());
}
