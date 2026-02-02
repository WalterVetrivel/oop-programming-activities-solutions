#include<iostream>
#include<string>
using namespace std;

// A function that uses call by references to get inputs
// Call by reference allows us to modify the original variables that we pass into the function as parameters (this is because we're passing the addresses of the variables, not just copies of the values as we do with call by value)
// This means we don't have to return anything - we can directly access the values we put into the parameters from main() [or wherever else you call this function from]
void getInputs(int &runs, int &wickets, int &catches, int &runOuts)
{
    cout << "Enter stats for the player: \n";
    cout << "Runs: ";
    cin >> runs;
    cout << "Wickets: ";
    cin >> wickets;
    cout << "Catches: ";
    cin >> catches;
    cout << "Run Outs: ";
    cin >> runOuts;
    cout << endl;
}

// Function to calculate the rating of a player
// Here, we pass the parameters by value as we just need copies of their values to calculate the rating
// We have to return the calculated rating because that's generated locally and not stored in any variable that we pass into this function
double calculateRating(int runs, int wickets, int catches, int runOuts)
{
    // Formula to calculate rating - this is not a realistic or good formula, just an example to demonstrate functions and arithmetic operations
    return (0.4 * runs) + (0.4 * wickets) + (0.1 * catches) + (0.1 * runOuts);
}

int main()
{
    // Variable declarations - we're separating the variables just for clarity, there's nothing wrong with declaring all of them in one line
    int runs1, wickets1, catches1, runOuts1;
    int runs2, wickets2, catches2, runOuts2;

    // Getting inputs for player #1
    cout << "Enter stats for the player: \n";
    cout << "Runs: ";
    cin >> runs1;
    cout << "Wickets: ";
    cin >> wickets1;
    cout << "Catches: ";
    cin >> catches1;
    cout << "Run Outs: ";
    cin >> runOuts1;
    cout << endl;

    // Getting inputs for player #2 - we're repeating the same process as above, think of how we can reduce this redundancy, perhaps using a function with call by reference parameters
    /* cout << "Enter stats for Player 2: ";
    cout << "Runs: ";
    cin >> runs2;
    cout << "Wickets: ";
    cin >> wickets2;
    cout << "Catches: ";
    cin >> catches2;
    cout << "Run Outs: ";
    cin >> runOuts2;
    cout << endl; */

    getInputs(runs2, wickets2, catches2, runOuts2); // Using our call by reference function to get the inputs for player 2 - here, when we pass in runs2, wickets2, catches2 and runOuts2, we're not passing (copies of) their values, we're literally passing their actualy memory addresses so that the function can directly insert the input values into these variables and we can access the values here in main()

    // Calculating the rating for both players
    double rating1 = calculateRating(runs1, wickets1, catches1, runOuts1);
    double ratings2 = calculateRating(runs2, wickets2, catches2, runOuts2);
    
    // Comparing the ratings and printing the man of the match
    if (rating1 > ratings2)
        cout << "Player 1 is the Man of the Match with a rating of " << rating1 << endl;
    else if (ratings2 > rating1)
        cout << "Player 2 is the Man of the Match with a rating of " << ratings2 << endl;
    else
        cout << "Both players have equal ratings." << endl;

    return 0;
}