/*
MICAH STRADLING

Option 1: Write a program that will convert miles to kilometers and kilometers
to miles. The user will indicate both a number (representing a distance)
and a choice of whether that number is in miles to be converted to kilometers or kilometers to be converted to miles. Each conversion is done
with a value returning function. You may use the following conversions.
1 kilometer = .621 miles
1 mile = 1.61 kilometers
*/

#include <iostream>
using namespace std;

float convertToMiles(float kilometers);
float convertToKilometers(float miles);

int main(){
    float number;
    int choice;
    bool validChoice = false;

    cout << "This program converts Miles into Kilometers and vice versa\n";
    cout << "Please enter the number you wish to convert\n";
    cin >> number;

    cout << "Which conversion would you like to make?\n";
    cout << "1 - Miles converted to Kilometers\n";
    cout << "2 - Kilometers converted to Miles\n";
    while (validChoice == false)
    {
    cin >> choice;

    switch (choice)
    {
    case 1:
        validChoice = true;
        cout << number << " miles is equivalent to " << convertToKilometers(number) << " kilometers.\n";
        break;
    case 2:
        validChoice = true;
        cout << number << " kilometers is equivalent to " << convertToMiles(number) << " miles.\n";
        break;
    
    default:
        cout << "It appears you've selected an invalid option.\n";
        cout << "Please try again\n";
        break;
    }
    }
}

float convertToMiles(float kilometers){
    float miles = kilometers * 0.621;
    return miles;
}

float convertToKilometers(float miles){
    float kilometers = miles * 1.61;
    return kilometers;
}
