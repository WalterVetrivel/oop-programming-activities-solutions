#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i];
    }

    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Square of " << i << " is " << i * i << endl;
    }

    cout << "Factorial: " << endl;
    int fact = 1;
    for (int i = 5; i > 0; i--)
    {
        fact = fact * i;
    }
    cout << "The factorial of 5 is " << fact;

    return 0;
}