#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class temp
{
    string username, Email, password;
    fstream file;

public:
    void login();
    void signup();
    void forgot();
} obj;

int main()
{
    char choice;

    cout << "\n1 - Login";
    cout << "\n2 - Sign-up";
    cout << "\n3 - Forgot password";
    cout << "\n4 - Exit";
    cout << "\nEnter your choice : ";
    cin >> choice;
    cin.ignore();   

    switch (choice)
    {
    case '1':
        obj.login();
        break;
    case '2':
        obj.signup();
        break;
    case '3':
        obj.forgot();
        break;
    case '4':
        return 0;
    default:
        cout << "\nInvalid choice!";
    }
    return 0;
}

void temp::signup()
{
    cout << "\nEnter username : ";
    getline(cin, username);

    cout << "Enter Email : ";
    getline(cin, Email);

    cout << "Enter password : ";
    getline(cin, password);

    file.open("loginData.txt", ios::out | ios::app);
    file << username << "*" << Email << "*" << password << endl;
    file.close();

    cout << "\nSignup successful!\n";
}

void temp::login()
{
    string searchName, searchPass;
    bool found = false;

    cout << "\n=========== LOGIN ===========\n";
    cout << "Enter username : ";
    getline(cin, searchName);

    cout << "Enter password : ";
    getline(cin, searchPass);

    file.open("loginData.txt", ios::in);

    while (getline(file, username, '*'))
    {
        getline(file, Email, '*');
        getline(file, password);

        if (username == searchName && password == searchPass)
        {
            cout << "\nLogin successful!";
            cout << "\nUsername : " << username;
            cout << "\nEmail    : " << Email << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nInvalid username or password!\n";

    file.close();
}

void temp::forgot()
{
    string searchName, searchEmail;
    bool found = false;

    cout << "\n=========== FORGOT PASSWORD ===========\n";
    cout << "Enter username : ";
    getline(cin, searchName);

    cout << "Enter Email : ";
    getline(cin, searchEmail);

    file.open("loginData.txt", ios::in);

    while (getline(file, username, '*'))
    {
        getline(file, Email, '*');
        getline(file, password);

        if (username == searchName && Email == searchEmail)
        {
            cout << "\nAccount found!";
            cout << "\nYour password is : " << password << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nAccount not found!\n";

    file.close();
}
