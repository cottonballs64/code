// MICAH STRADLING

/*
In these assignments you are asked to develop functions that have dynamic
arrays as parameters. Remember that dynamic arrays are accessed by a pointer variable
and thus the parameters that serve as dynamic arrays are, in fact, pointer variables.

Example:
    void sort(float* score, int num_scores); // a prototype whose function has a dynamic array as its first parameter. It is a pointer variable
    int main()
        {
            float *score = nullptr; // a pointer variable
            score = new float(num_scores); // allocation of the array
            sort(score,scoreSize); // call to the function
        }

Option 1: Write a program that will read scores into an array. The size of the
array should be input by the user (dynamic array). The program will find
and print out the average of the scores. It will also call a function that will
sort (using a bubble sort) the scores in ascending order. The values are
then printed in this sorted order.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void getScores(float*, int);
float getAverage(float*, int);
void bubbleSortArray(float*, int);
void displayArray(float*, int);

int main()
{
    int numScores;
    float *scores = nullptr;

    cout << "How many scores would you like to enter?" << endl;
    cin >> numScores;

    scores = new float(numScores);

    getScores(scores, numScores);
    float aveScore = getAverage(scores, numScores);
    cout << "The average of all scores was: " << aveScore << endl;
    bubbleSortArray(scores, numScores);
    displayArray(scores, numScores);
    delete scores;
    return 0;
}

void getScores(float* scores, int numScores){
    for (int index = 0; index < numScores; index++)
    {
        cout << "Enter score " << (index + 1) << ": ";
        cin >> *(scores + index);
    }
}

float getAverage(float* scores, int numScores){
    float sum = 0;
    for (int index = 0; index < numScores; index++)
    {
        sum += *(scores + index);
    }
    float average = sum / numScores;
    return average;
}

void bubbleSortArray(float* array, int numElements)
    {
    bool swap;
    float temp;
    int bottom = numElements - 1;
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

void displayArray(float* array, int numElements)
    {
    cout << "The scores entered from lowest to highest were:" << endl;
    for (int count = 0; count < numElements; count++)
    {
    cout << setw(10) << array[count];
    }
    cout << endl;
    }

