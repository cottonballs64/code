/*
Write a C++ program that includes a function called draw() that returns an int.
The body of the function should select a random integer between 0 and 51, which is returned.
Create another function called drawTest() that doesn't take any parameters or return any value.
Instead, the drawTest() should create a for loop that tests the draw function, printing the result of a new draw to the console 200 times.
In the main function, seed the random generator and call the drawTest() function.
int draw();
void drawTest();
int main() {
     srand(time(0));
     drawTest();
}
*/
#include <iostream>
using namespace std;

int draw();
void drawTest();

int main() {
    srand(time(0));
    drawTest();

return 0;

}

int draw(){
    int randInt = rand() % 52;
    return randInt;
}

void drawTest(){
    for (int i = 1; i <= 200; i++)
    {
        cout << i << ": " << draw() << endl;
    }
    
}