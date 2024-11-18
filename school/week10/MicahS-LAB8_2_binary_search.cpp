// This program demonstrates a Binary Search
// MICAH STRADLING

#include <iostream>
using namespace std;
int binarySearch(int [], int, int); // function prototype
const int SIZE = 16;
int main()
    {
    int found, value;
    int array[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    // int array[] = {34,19,19,18,17,13,12,12,12,11,9,5,3,2,2,0};
    // array to be searched
    cout << "Enter an integer to search for:" << endl;
    cin >> value;
    found = binarySearch(array, SIZE, value);
    // function call to perform the binary search
    // on array looking for an occurrence of value
    if (found == -1)
    cout << "The value " << value << " is not in the list" << endl;
    else
    cout << "The value " << value << " is in position number "
    << found + 1 << " of the list" << endl;
    return 0;
    }
//*******************************************************************
// binarySearch
//
// task: This searches an array for a particular value
// data in: List of values in an orderd array, the number of
// elements in the array, and the value searched for
// in the array
// data returned: Position in the array of the value or -1 if value
// not found
//
//*******************************************************************
int binarySearch(int array[],int numElems,int value) //function heading
    {
    int first = 0; // First element of list
    int last = numElems - 1; // last element of the list
    int middle; // variable containing the current
    // middle value of the list
    while (first <= last)
        {
        middle = first + (last - first) / 2;
        if (array[middle] == value)
        return middle; // if value is in the middle, we are done
        else if (array[middle] < value)
        first = middle + 1;
        else
        last = middle - 1;
        }
    return -1; // indicates that value is not in the array
    }

/*
Exercise 1: The variable middle is defined as an integer. The program contains
the assignment statement middle=first+(last-first)/2. Is the right side
of this statement necessarily an integer in computer memory? 
    Not outside of the calculation used to determine what middle is
Explain how the middle value is determined by the computer. How does this line of
code affect the logic of the program? Remember that first, last, and
middle refer to the array positions, not the values stored in those array
positions.
    "middle" is whatever [first]+{[last]-[first])/2 is equal to
    During the first loop it is [0]+([15]-[0]) / 2, which would be 8 when rounded up

Exercise 2: Search the array in the program above for 19 and then 12. Record
what the output is in each case.
Note that both 19 and 12 are repeated in the array. Which occurrence of
19 did the search find?
    The value 19 is in position number 2 of the list (the second 19 in the array)

Which occurrence of 12 did the search find?
    The value 12 is in position number 8 of the list (the third 12 in the array)

Explain the difference.
    It means that the loop landed on that specific index of the array first before the other options for that integer and returning middle.

Exercise 3: Modify the program to search an array that is in ascending order.
Make sure to alter the array initialization.
    Adjustments made above
*/
