#include <iostream>
using namespace std;

// Function to swap two integers - this is required for sorting; we are passing the numbers by reference so that the changes reflect in the original array.
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to sort an array using a simple bubble sort algorithm - the array we pass in is treated as if it were passed by reference, so, sorting it here will result in the original array being sorted.
void sortArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }
}

int main()
{
    int numbers[5] = {63, 26, 52, 39, 8};

    sortArray(numbers, 5);

    cout << "Sorted array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}