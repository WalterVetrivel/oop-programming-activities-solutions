/*
GUITAR STRINGS STANDARD TUNING FREQUENCIES
E4 - 329.63 Hz
B3 - 246.94 Hz
G3 - 196.00 Hz
D3 - 146.83 Hz
A2 - 110.00 Hz
E2 - 82.41 Hz
*/

#include <iostream>
using namespace std;

void tune(double, double);

int main()
{
    double E4 = 329.63; // will be represented as e in the input
    double B3 = 246.94; // will be represented as b in the input
    double G3 = 196.00; // will be represented as g in the input
    double D3 = 146.83; // will be represented as d in the input
    double A2 = 110.00; // will be represented as a in the input
    double E2 = 82.41;  // will be represented as E in the input

    char stringName;
    double inputFreq;

    cout << "Enter the string you want to tune: ";
    cin >> stringName;

    cout << "Please enter the frequency: ";
    cin >> inputFreq;

    if (stringName == 'e')
    {
        tune(inputFreq, E4);
    }
    else if (stringName == 'b')
    {
        tune(inputFreq, B3);
    }
    else if (stringName == 'g')
    {
        tune(inputFreq, G3);
    }
    else if (stringName == 'd')
    {
        tune(inputFreq, D3);
    }
    else if (stringName == 'a')
    {
        tune(inputFreq, A2);
    }
    else if (stringName == 'E')
    {
        tune(inputFreq, E2);
    }
    else
    {
        cout << "Invalid string. Please enter a valid string name.";
    }

    return 0;
}

void tune(double inputFreq, double targetFreq)
{
    if (inputFreq < targetFreq)
    {
        cout << "Too low. Please tune higher.";
    }
    else if (inputFreq > targetFreq)
    {
        cout << "Too high. Please tune lower.";
    }
    else
    {
        cout << "Your string is in tune!";
    }
}