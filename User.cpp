#include "User.h"

User::User() {
    this->username = " ";
    this->password = " ";
}

User::User(string username, string password) {
    this->username = username;
    this->password = password;
}

void User::add(string username, string password) {
    users.push_back(User(username, password));
}

void User::display() {
    for (int i = 0; i < users.size(); i++) {
        cout << "user: " << i + 1 << endl;
        cout << "username: " << users[i].username << endl;
        cout << "password: " << users[i].password << endl;
        cout << endl;
    }
}

bool User::authenticate(string inputUsername, string inputPassword) {
    for (int i = 0; i < users.size(); i++) {
        if (users[i].username == inputUsername && users[i].password == inputPassword) {
            return true;
        }
    }
    return false;
}