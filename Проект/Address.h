#pragma once
#include <iostream>

using namespace std;

class Address
{
private:
    string address;

public:
    Address(string newAddress):
        address(newAddress)
    {
    }

    string get_Address()
    {
        return address;
    }
};