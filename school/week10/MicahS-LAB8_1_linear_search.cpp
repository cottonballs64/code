// This program performs a linear search on a character array
// MICAH STRADLING

#include <iostream>
using namespace std;
int searchList(char[], int, char); // function prototype
int searchListNum(int[], int, int);

const int SIZE = 8;

/* For finding the character, hiding this for Exercise 1
int main()
    {
    char word[SIZE] = "Harpoon";
    int found;
    char ch;
    cout << "Enter a letter to search for:" << endl;
    cin >> ch;
    found = searchList(word, SIZE, ch);
    if (found == -1)
    cout << "The letter " << ch
    << " was not found in the list" << endl;
    else
    cout << "The letter " << ch <<" is in the " << found + 1
    << " position of the list" << endl;
    return 0;
    }
*/

int main()
    {
    int numberList[SIZE] = {3, 6, -19, 5, 5, 0, -2, 99};
    int found;
    int num;
    int userChoice;
    do {
    cout << "Enter an integer to search for:" << endl;
    cin >> num;
    found = searchListNum(numberList, SIZE, num);
    if (found == -1)
    cout << "The integer " << num
    << " was not found in the list" << endl;
    else
    cout << "The integer " << num <<" is in the " << found + 1
    << " position of the list" << endl;

    cout << "Would you like to search for another integer? Enter any integer to continue, enter -1 to end the program." << endl;
    cin >> userChoice;
    }
    while (userChoice != -1);
    return 0;
    }
//*******************************************************************
// searchList
//
// task: This searches an array for a particular value
// data in: List of values in an array, the number of
// elements in the array, and the value searched for
// in the array
// data returned: Position in the array of the value or -1 if value
// not found
//
//*******************************************************************
int searchList(char List[], int numElems, char value)
    {
    for (int count = 0; count <= numElems; count++)
        {
        if (List[count] == value)
        // each array entry is checked to see if it contains
        // the desired value.
        return count;
        // if the desired value is found, the array subscript
        // count is returned to indicate the location in the array
        }
    return -1; // if the value is not found, -1 is returned
    }

int searchListNum(int List[], int numElems, int value)
    {
    for (int count = 0; count <= numElems; count++)
        {
        if (List[count] == value)
        return count;
        }
    return -1;
    }

/*
Exercise 1: Re-write this program so that it searches an array of integers rather
than characters. Search the integer array nums[8] =
3 6 –19 5 5 0 –2 99
for several different integers. Make sure you try integers that are in the array
and others that are not. What happens if you search for 5?
    The integer 5 is in the 4 position of the list

Exercise 2: Re-write the program so that the user can continue to input values
that will be searched for, until a sentinel value is entered to end the program.
Should a pre or post test loop be used?
    Post test loop makes more sense to me and was what I went with,
    I had it prompt the user for the first test before prompting whether to do it again.

*/
