/*
MICAH STRADLING

Write a program that prompts the user to enter the number of elements and the
numbers themselves to be placed in an integer array that holds a maximum of 50
elements. The program should then prompt the user for an integer which will be
searched for in the array using a binary search. Make sure to include the following steps along the way:

i) A sort routine must be called before the binary search. You may use either
the selection sort or the bubble sort. However, the sort must be implemented in its own function and not in main.

ii) Next include a function called by main to implement the binary search.
The ordered array produced by the sort should be passed to the search
routine which returns the location in the sorted array of the sought value,
or -1 if the value is not in the array.

iii) Add a value returning function that computes the mean of your data set.
Recall that the mean is the sum of the data values divided by the number
of pieces of data. Your program should output the size of the array
entered, the array as entered by the user, the sorted array, the integer
being searched for, the location of that integer in the sorted array (or an
appropriate message if it is not in the array), and the mean of the data set.

*/

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXSIZE = 50;

void getArray(int [], int&);
void bubbleSortArray(int [], int);
int binarySearch(int [], int, int);
void displayArray(int[], int);
float findMeanArray(int[], int);

int main()
    {
        int numElements, foundValue, searchValue;
        int values[MAXSIZE] = {};
        getArray(values, numElements);
        cout << "The values entered were:" << endl;
        displayArray(values,numElements);
        bubbleSortArray(values,numElements);
        cout << "The values were sorted from least to greatest value:" << endl;
        displayArray(values,numElements);
        cout << "Enter an integer to search the list for:" << endl;
        cin >> searchValue;
        foundValue = binarySearch(values, numElements, searchValue);
        if (foundValue == -1)
        {cout << "The value " << searchValue << " is not in the list" << endl;}
        else
        {cout << "The value " << searchValue << " is in position number " << foundValue + 1 << " of the list" << endl;}
        float mean = findMeanArray(values, numElements);
        cout << "The mean of all values was: " << mean << endl;
    }

void getArray(int array [], int& num){
    do {
        cout << "How many integers would you like to store? (Max 50)" << endl;
        cin >> num;
        if (num > MAXSIZE)
        {
            cout << "Looks like you entered a value higher than " << MAXSIZE << ", please try again" << endl;
        }
        else
        {
        for (int index = 0; index < num; index++)
        {
            cout << "Please enter value #" << index +1 << ": ";
            cin >> array[index];
        }
        }
    }
    while (num > MAXSIZE);
}

void displayArray(int array[], int elems)
    {
    for (int count = 0; count < elems; count++)
    {
    cout << setw(10) << array[count];
    }
    cout << endl;
    }

int binarySearch(int array[],int elems,int value)
    {
    int first = 0;
    int last = elems - 1;
    int middle;
    while (first <= last)
        {
        middle = first + (last - first) / 2;
        if (array[middle] == value)
        return middle;
        else if (array[middle] < value)
        first = middle + 1;
        else
        last = middle - 1;
        }
    return -1;
    }

void bubbleSortArray(int array[], int elems)
    {
    bool swap;
    int temp;
    int bottom = elems - 1;
    do
        {
        swap = false;
        for (int count = 0; count < bottom; count++)
            {
            if (array[count] > array[count+1])
                {
                temp = array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true;
                }
            }
        bottom--;
        } while(swap != false);
    }

float findMeanArray(int array[], int elems){
    float mean, sum = 0;
    for (int index = 0; index < elems; index++)
    {
        sum += array[index];
    }
    mean = sum / elems;
    return mean;
}
