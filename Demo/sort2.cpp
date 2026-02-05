#include <iostream>
using namespace std;

void displayArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Number at index " << i << " is " << numbers[i] << endl;
    }
}

int main()
{
    int numbers[5] = {10, 32, 25, 72, 15};

    displayArray(numbers, 5);
    cout << "Outside the loop..." << endl;

    int temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "\nThe sorted array: " << endl;
    displayArray(numbers, 5);

    return 0;
}