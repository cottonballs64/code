/*
Write a C++ program that creates an array of strings called rainbow. 
string rainbow[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };
Then, write two functions:  one that takes the array and a number, and prints out the value at that index.
Another that takes in the array and an int, size, and prints out the seven colors, one on each line.
*/
#include <iostream>
using namespace std;

void printColor(string color[], int index);
void printColors(string colors[], int size);

int main() {
string rainbow[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };

printColor(rainbow, 5);
cout << endl;
printColors(rainbow, 7);
return 0;

}

void printColor(string color[], int index){
    cout << color[index] << endl;
}

void printColors(string colors[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << colors[i] << endl;
    }
}
