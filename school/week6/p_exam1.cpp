// Practice Exam 1
// Calculate garden area
// Yuka Nagayoshi

/*
Please enter your choice of hspae from the following menu:

1. Rectangle
2. Quit

Menu Choice: 1

Radius of the circle: 3


Charges

Dimensions of the circle:
 Radius: 3.0 inches

Area: 28.3 square inches

Cost ...............$20.00
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

const double PI = 3.1416;

int main()
{
	string shape_name;
	int shape = 0;
	double area = 0, radius = 0, cost = 0;

	cout << "Please enter your choice of hspae from the following menu:\n\n";
	cout << "1. Rectangle\n";
	cout << "2. Quit\n";
	cout << "\nMenu Choice: ";
	cin >> shape;

	if (shape == 1)
	{
		shape_name = "circle";

		cout << "\n Radius of the circle: ";
		cin >> radius;		

		area = PI * pow(radius, 2);
	}
	else if (shape == 2)
	{
		cout << "\n\nThank you for using this program:)" << endl << endl;
		return 0;
	}
	else
	{
		cout << "\n\nInvalid menu choice - Run program again." << endl << endl;
		return 0;
	}

	cout << setprecision(1) << fixed << showpoint;

	cout << "\n\nCharges" << endl << endl;
	cout << "Dimensions of the " << shape_name << ":\n";
	cout << "Radius: " << radius << " inches\n\n";
	cout << "Area: " << area << " square inches\n\n";

	if (area > 0 && area <= 50)
	{
		cost = 20.00;

	}
	else if (area > 50 && area <= 100)
	{
		cost = 40.00;

	}
	else if (area > 100 && area <= 200)
	{
		cost = 60.00;
	}
	else
	{
		cost = 80.00;
	}

	cout << setprecision(2) << fixed << showpoint;

	cout << "Cost ...............$" << cost << endl << endl;

	return 0;
}


