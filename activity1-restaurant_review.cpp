// Including the header files needed for input/output operations and string handling
#include <iostream>
#include <string>
using namespace std;

// Function to calculate the average of two ratings
// It takes in two paramenters (arguments or inputs) - rating1 and rating2, both of which are integers
// It returns the average of these two ratings as a double (a number that can have decimal points)
double calculateAverageRating(int rating1, int rating2)
{
    return (rating1 + rating2) / 2;
}

int main()
{
    // Variable declarations to store the restaurant name and ratings
    string restaurantName;
    int rating1, rating2;

    // Getting the inputs for restaurantName, rating1, and rating2from the user
    cout << "Enter the restaurant name: ";
    getline(cin, restaurantName); // Using getline to allow for spaces in the restaurant name

    cout << "Enter the first rating (1-5): ";
    cin >> rating1;

    cout << "Enter the second rating (1-5): ";
    cin >> rating2;

    // Calling our function to calculate the average rating and store it in a separate variable
    double averageRating = calculateAverageRating(rating1, rating2);

    // Displaying the output to the user
    cout << "The average rating for " << restaurantName << " is: " << averageRating << endl;

    return 0;
}