/*
Write a C++ program containing a function that takes in a double value representing
a temperature in Fahrenheit and then returns a temperature in Celcius.
Use the main function to test it.
*/
#include <iostream>
using namespace std;

void fahrenheitToCelcius(double);

int main() {
double temperature;
cout << "This program converts Fahrenheit to Celcius.\n" << "Enter a temperature in Fahrenheit: \n";
cin >> temperature;
fahrenheitToCelcius(temperature);

return 0;

}

void fahrenheitToCelcius(double temp){
double cTemp;
cTemp = ((temp - 32) * 5/9.0);
    cout << "That is " << cTemp << " degrees in Celcius\n";
};