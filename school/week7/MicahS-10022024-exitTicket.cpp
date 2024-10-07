/*
Write a function that collects a string from the user
Write a function that prints text out
Write a function called echo that takes input from a user and prints it back out
*/
#include <iostream>
using namespace std;
string text;

string getText(){
    cout << "Enter any text\n";
    getline(cin, text);
    return text;
}

void printText(string text){
    cout << text << endl;
}

void echo(){
    getText();
    printText(text);
}

int main() {
echo ();
return 0;

}
