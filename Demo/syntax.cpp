#include <iostream>
using namespace std;

// Other functions or function prototype
// int addNumbers(int, int);
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int a = 5, b = 3;
    cout << "The sum of a and b is " << addNumbers(a, b) << endl;

    return 0;
}
