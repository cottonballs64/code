/*
Write a C++ program that creates an array of strings called rainbow. 
string rainbow[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };
Then, write two functions:  one that takes the array and a number, and prints out the value at that index.
Another that takes in the array and an int, size, and prints out the seven colors, one on each line.
*/
#include <iostream>
using namespace std;

void printColorArray(string color[], int index);
void printColorsArray(string colors[], int size);

void printColorPointer(string color[], int index);
void printColorsPointer(string colors[], int size);

int main() {
string rainbow[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };

printColorArray(rainbow, 3);
cout << endl;

printColorPointer(rainbow, 3);
cout << endl;

printColorsArray(rainbow, 7);
cout << endl;

printColorsPointer(rainbow, 7);
return 0;

}

void printColorArray(string color[], int index){
    cout << color[index] << endl;
}

void printColorPointer(string color[], int index){
    cout << *(color + index) << endl;
}

void printColorsArray(string colors[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << *(colors + i) << endl;
    }
}

void printColorsPointer(string colors[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << colors[i] << endl;
    }
}

