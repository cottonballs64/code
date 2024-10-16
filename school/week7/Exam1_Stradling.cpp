/*
MICAH STRADLING

Input:
    Buyer name: Micah Stradling
    Menu choice: 3
    Radius: 5.3
    Height: 9.4

Output:
Hi, please enter the name you would like attached to your order: 
Micah Stradling
Enter the number for the shape of container you would like to order:

1 : Cylinder
2 : Sphere
3 : Cone

Enter -1 to cancel menu selection
3

Please enter the radius of the Cone required in inches:
5.3

Please enter the height of the Cone required in inches:
9.4

Shipping Charges for Micah Stradling

Dimensions of the Cone: 

Radius: 5.3 inches
Height: 9.4 inches

The volume of the Cone is: 276.509 cubic inches

Handling charge: $10.50
Shipping charge: $9.28
Total charges: $19.78


=== Code Execution Successful ===
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const double PI = 3.1416;
string shapeChoice, buyerName;
double radius, height, volume, handling, shipping, total;

double formulaShape() {
    if (shapeChoice == "Cylinder")
    {
        volume = PI * (pow(radius, 2)) * height;
    }
    else if (shapeChoice == "Sphere")
    {
        volume = (4.0/3.0) * PI * (pow(radius, 3));
    }
    else if (shapeChoice == "Cone")
    {
        volume = (1.0/3.0) * PI * (pow(radius, 2)) * height;
    }

    return volume;
};

double promptRadius(){
    cout << "Please enter the radius of the " << shapeChoice << " required in inches:\n";
    cin >> radius;
    cout << endl;
    return radius;
};

double promptHeight(){
    cout << "Please enter the height of the " << shapeChoice << " required in inches:\n";
    cin >> height;
    cout << endl;
    return height;
};

void volumeOutput() {
    cout << "Dimensions of the " << shapeChoice << ": " << endl << endl;
    if (shapeChoice == "Sphere")
    {
    cout << "Radius: " << radius << " inches" << endl << endl;
    }
    else
    cout << "Radius: " << radius << " inches" << endl << "Height: " << height << " inches" << endl << endl;

    cout << "The volume of the " << shapeChoice << " is: " << volume << " cubic inches" << endl << endl;
};

void shippingHandlingCalculation(){
    cout << "Shipping Charges for " << buyerName << endl << endl;
    if (volume <= 150)
    {
        handling = 2.35;
        shipping = 0.15 * volume;
    }
    else if (volume <= 250)
    {
        handling = 5.75;
        shipping = 0.25 * (volume - 150);
    }
    else if (volume <= 350)
    {
        handling = 10.50;
        shipping = 0.35 * (volume - 250);
    }
    else if (volume > 350)
    {
        handling = 15.25;
        shipping = 0.45 * (volume - 350);
    };
    total = handling + shipping;
    volumeOutput();
    cout << setprecision(2) << fixed << showpoint;
    cout << "Handling charge: $" << handling << endl;
    cout << "Shipping charge: $" << shipping << endl;
    cout << "Total charges: $" << total << endl;
};

int main() {
    int menuChoice = 0;

    cout << "Hi, please enter the name you would like attached to your order: \n";
    getline(cin, buyerName);

    while (menuChoice != -1)
    {
        cout << "Enter the number for the shape of container you would like to order:" << endl << endl;
        cout << "1 : Cylinder" << endl;
        cout << "2 : Sphere" << endl;
        cout << "3 : Cone" << endl << endl;
        cout << "Enter -1 to cancel menu selection" << endl;

        cin >> menuChoice;
        cout << endl;

        switch (menuChoice)
        {
        case 1:
        shapeChoice = "Cylinder";
        promptRadius();
        promptHeight();
        formulaShape();
        shippingHandlingCalculation();
        return 0;

        case 2:
        shapeChoice = "Sphere";
        promptRadius();
        formulaShape();
        shippingHandlingCalculation();
        return 0;

            break;
        case 3:
        shapeChoice = "Cone";
        promptRadius();
        promptHeight();
        formulaShape();
        shippingHandlingCalculation();
        return 0;

            break;
        case -1: 
        cout << "Thank you for using this program!" << endl;
        return 0;
            break;
        default:
        cout << "Invalid menu choice - Run program again." << endl << endl;
            break;
        }

    }

}
