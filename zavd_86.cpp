// zavd_86.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "user.h"
#include"AuthenticationException.h"

#include <string>
#include <vector>
#include <Exception>
using namespace std;

int main() {
    User user;
    string username, password;
    string inputUsername, inputPassword;

    int size;
    cout << "Enter the database size: ";
    cin >> size;
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << "Enter username to add to the database: ";
        cin >> username;
        cout << endl;

        cout << "Enter password to add to the database: ";
        cin >> password;
        cout << endl;

        user.add(username, password);
        cout << endl;
    }

    user.display();
    cout << endl;

    cout << "Enter username: ";
    cin >> inputUsername;
    cout << endl;

    cout << "Enter password: ";
    cin >> inputPassword;
    cout << endl;

    try {

        if (!user.authenticate(inputUsername, inputPassword)) {
            throw AuthenticationException();
        }
        else {
            cout << "Authentication successful!" << endl;
        }
    }

    catch (const exception& ex) {
        cerr << ex.what() << endl;
    }
}