// This program uses a bubble sort to arrange an array of integers in
// ascending order
// MICAH STRADLING

#include <iostream>
using namespace std;
// function prototypes
void bubbleSortArray(int [], int);
void displayArray(int[], int);
const int SIZE = 8;

int main()
    {
    int values[SIZE] = {23, 0, 45, -3, -78, 1, -1, 9};
    cout << "The values before the bubble sort is performed are:" << endl;
    displayArray(values,SIZE);
    bubbleSortArray(values,SIZE);
    cout << "The values after the bubble sort is performed are:" << endl;
    displayArray(values,SIZE);
    return 0;
    }
//******************************************************************
// displayArray
//
// task: to print the array
// data in: the array to be printed, the array size
// data out: none
//
//******************************************************************
void displayArray(int array[], int elems) // function heading
    { // displays the array
    for (int count = 0; count < elems; count++)
    cout << array[count] << " " << endl;
    }
//******************************************************************
// bubbleSortArray
//
// task: to sort values of an array in ascending order
// data in: the array, the array size
// data out: the sorted array
//
//******************************************************************
void bubbleSortArray(int array[], int elems)
    {
    bool swap;
    int temp;
    int bottom = elems - 1; // bottom indicates the end part of the
    // array where the largest values have
    // settled in order
    do
        {
        swap = false;
        for (int count = 0; count < bottom; count++)
            {
            if (array[count] < array[count+1])
                { // the next three lines do a swap
                temp = array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true; // indicates that a swap occurred
                }
            }
        bottom--; // bottom is decremented by 1 since each pass through
        // the array adds one more value that is set in order
        } while(swap != false);
    // loop repeats until a pass through the array with
    // no swaps occurs
    }

/*
Exercise 1: Re-write the sort program you chose so that it orders integers from
largest to smallest rather than smallest to largest.

Exercise 2: Modify your program from Exercise 1 so that it prints the array at
each step of the algorithm. Try sorting the array
23 0 45 –3 –78 1 –1 9
by hand using whichever algorithm you chose. Then have your program
do the sort. Does the output match what you did by hand?
    Yeah, I copied my method below. I just make two arrays, sorted and unsorted and work until n-1

        Unsorted: [23 0 45 –3 –78 1 –1 9]
        START

        Pass 1: 
        Unsorted: [23 0 45 –3 1 –1 9]
        Sorted: [-78]

        Pass 2:
        Unsorted: [45 23 0 1 -1 9]
        Sorted: [-3 –78]

        Pass 3:
        Unsorted: [45 23 1 0 9]
        Sorted: [-1 -3 –78]

        Pass 4:
        Unsorted: [45 23 1 9]
        Sorted: [0 -1 -3 –78]

        Pass 5:
        Unsorted: [45 23 9]
        Sorted: [1 0 -1 -3 –78]

        Pass 6:
        Unsorted: [45 23]
        Sorted: [9 1 0 -1 -3 –78]

        Pass 7:
        Unsorted: [45]
        Sorted: [23 9 1 0 -1 -3 –78]

        END

*/
