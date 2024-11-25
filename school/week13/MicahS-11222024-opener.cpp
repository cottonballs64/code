/*
Write a C++ program that creates a struct representing an address:
street address
city
state
zip-code
country
*/

#include <iostream>
#include <vector>
using namespace std;

struct address {
    string streetAddress;
    string city;
    string state;
    int zipCode;
    string country;
};

void printAddress(address);

int main() {
    address userAddress;
    cout << "Please enter the street address: " << endl;
    getline(cin, userAddress.streetAddress);
    cout << "Please enter the City: " << endl;
    cin >> userAddress.city;
    cout << "Please enter the State: " << endl;
    cin >> userAddress.state;
    cout << "Please enter the Zip Code: " << endl;
    cin >> userAddress.zipCode;
    cout << "Please enter the Country: " << endl;
    cin >> userAddress.country;
    printAddress(userAddress);
    return 0;
}


void printAddress( address userInfo){
    cout << "Your address is: " << userInfo.streetAddress
    << ", " <<  userInfo.city << ", "
    << userInfo.state << " "
    << userInfo.zipCode << " "
    << userInfo.country << endl;
}
