#pragma once
#include <iostream>
#include "Address.h"

using namespace std;

class Human
{
private:
    string name;
    string surname;
    int age;
    string gender;
    string role;
    Address address;

public:
    Human(string newName, string newSurname, int newAge, string newGender, string newRole, Address newAddress):
        name(newName), surname(newSurname), age(newAge), gender(newGender), role(newRole), address(newAddress)
    {
    }

    string getName()
    {
        return name;
    }

    string getSurname()
    {
        return surname;
    }

    int getAge()
    {
        return age;
    }

    string getGender()
    {
        return gender;
    }

    string getRole()
    {
        return role;
    }

    Address getAddress()
    {
        return address;
    }

    void Data()
    {
        cout << "Name: " << getName() << endl;
        cout << "Surname: " << getSurname() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Gender: " << getGender() << endl;
        cout << "Role: " << getRole() << endl;
        cout << "Address: " << getAddress().get_Address() << endl;
    }
    virtual void printData()
    {
        Data();
        cout << endl;
    }
};