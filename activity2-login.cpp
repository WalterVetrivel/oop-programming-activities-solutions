// Including the header files needed for input/output operations and string handling
#include <iostream>
#include <string>
using namespace std;

// Function to handle a successful login, in the real world, this will take you to a home page or a dashboard, here, we're just printing a welcome message
void loginSuccess(string username)
{
    cout << "Login success! Welcome, " << username << endl;
}

// An optional function to handle login failure by printing an error message (in the real world, this might redirect back to the login page or a password reset page or something)
void loginFailure()
{
    cout << "Login failed. Invalid credentials provided." << endl;
}

// This function simply checks whether the provided login details match the details provided during registration, in the real world, the valid username and password would come from a database
// Here, it takes in four parameters - validUsername and validPassword (the correct credentials), and username and password (the credentials provided during login)
// In the real world, you'll only provide the username and password, the valid credentials will be fetched from a secure database
// The function returns a boolean value - true or false depending on whether the credentials match
bool checkCredentials(string validUsername, string validPassword, string username, string password)
{
    // Returns true if both the username and the password match, false otherwise
    return (username == validUsername && password == validPassword);
}

int main()
{
    // Variable declarations to store registration details
    string regUsername;
    string regPassword;

    // Getting the registration details as input
    cout << "Register - Enter username: ";
    getline(cin, regUsername); // Using getline to allow for spaces in the input
    cout << "Register - Enter password: ";
    getline(cin, regPassword);

    // Variable declarations to store login details
    string loginUsername;
    string loginPassword;

    // Getting the login details as input
    cout << "Login - Enter username: ";
    getline(cin, loginUsername);
    cout << "Login - Enter password: ";
    getline(cin, loginPassword);

    // Calling the checkCredentials function to verify the login details
    if (checkCredentials(regUsername, regPassword, loginUsername, loginPassword))
    {
        // Calling the loginSuccess function if the credentials are valid
        loginSuccess(loginUsername);
    }
    else
    {
        loginFailure();
    }

    return 0;
}