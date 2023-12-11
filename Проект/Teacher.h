#pragma once
#include <iostream>
#include "Human.h"

using namespace std;

class Teacher: public Human
{
private:
	int salary;
    int numStudents;

public:
    Teacher(string newName, string newSurname, int newAge, string newGender, string newRole, Address newAddress, int newSalary, int newNumStudents):
        Human(newName, newSurname, newAge, newGender, newRole, newAddress), salary(newSalary), numStudents(newNumStudents)
    {
    }

    int getSalary()
    {
        return salary;
    }

    int getNumStudents()
    {
        return numStudents;
    }

    void printData()
    {
        Data();
        cout << "Salary: " << getSalary() << endl
            << "Num of students: " << getNumStudents() << endl;
    }
};