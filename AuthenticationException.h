#pragma once
#include <iostream>
#include <exception>
using namespace std;

class AuthenticationException : public exception {
public:
    AuthenticationException(const string& message = "Authentication failed")
        : exception(message.c_str()) {}
};