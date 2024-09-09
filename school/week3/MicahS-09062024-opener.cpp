#include <iostream>
using namespace std;

int main()
{
string name;
int apples;
int moreApples;


cout << "What is your name?" << endl;
cin >> name;
cout << "What is the number of apples you have eaten in the last 30 days?" << endl;
cin >> apples;
moreApples = 30 - apples;
cout << name << ", you are " << moreApples << " apples away from eating an apple a day." << endl;
}