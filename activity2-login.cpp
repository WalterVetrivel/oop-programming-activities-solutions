#include <iostream>
#include <string>
using namespace std;

void loginSuccess(string username)
{
    cout << "Login success! Welcome, " << username << endl;
}

void loginFailure()
{
    cout << "Login failed. Invalid credentials provided." << endl;
}

bool checkCredentials(string validUsername, string validPassword, string username, string password)
{
    return (username == validUsername && password == validPassword);
}

int main()
{
    string regUsername;
    string regPassword;

    cout << "Register - Enter username: ";
    getline(cin, regUsername);
    cout << "Register - Enter password: ";
    getline(cin, regPassword);

    string loginUsername;
    string loginPassword;

    cout << "Login - Enter username: ";
    getline(cin, loginUsername);
    cout << "Login - Enter password: ";
    getline(cin, loginPassword);

    if (checkCredentials(regUsername, regPassword, loginUsername, loginPassword))
    {
        loginSuccess(loginUsername);
    }
    else
    {
        loginFailure();
    }

    return 0;
}