/*
Write a C++ program that declares two integer variables, 
prompts the user to enter values for the two variables, 
and then prints out the larger of the two.
*/
#include <iostream>
using namespace std;

int main() {

int num1, num2;

cout << "Enter two integers with a space between them:\n";
cin >> num1, num2;
if (num1 > num2)
{
    cout << num1 << " is larger than " << num2 << endl;
}
if (num2 > num1)
{
    cout << num2 << " is larger than " << num1 << endl;
}
else
cout << num1 << " and " << num2 << "are equal\n";
return 0;

}
