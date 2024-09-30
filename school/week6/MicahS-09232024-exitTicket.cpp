/*

*/
#include <iostream>
using namespace std;

int main() {

srand(time(0));

    for (int careCount = 1; careCount <= 100; careCount++)
    {
        cout << "Checking car " << careCount << endl;
        for (int wheelCount = 1; wheelCount <= 4; wheelCount++)
        {
            cout << "   Tire " << wheelCount << ": ";
            int tireCheck = rand() % 1000 + 1;
            if (tireCheck <= 25)
            {
                cout << "The tire is flat!" << endl;
            }
            else
            cout << "A-Okay" << endl;
        }
        
    }
    
}

