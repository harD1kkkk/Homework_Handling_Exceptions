#pragma once
#include<iostream>
#include <vector>
using namespace std;

class User {
private:
    string username;
    string password;
    vector <User> users;
public:
    User();
    User(string username, string password);
    void add(string username, string password);
    void display();
    bool authenticate(string inputUsername, string inputPassword);
};