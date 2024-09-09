#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

int main() {
double sphereRadius;
cout << "Hi, this program will calculate the volume of a sphere.\n" << "Please enter the radius of the sphere to begin:\n" << endl;
cin >> sphereRadius;
cout << "The volume of the sphere is " << (4.0 / 3.0) * PI * pow(sphereRadius, 3) << endl;
}