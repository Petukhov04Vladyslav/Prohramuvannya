#pragma once
#include <iostream>
#include "Human.h"
#include "CourseWork.h"

using namespace std;

class Student: public Human
{
private:
    int stipend;
    CourseWork courseWork;

public:
    Student(string newName, string newSurname, int newAge, string newGender, string newRole, Address newAddress, int newStipend, CourseWork newCourseWork) :
        Human(newName, newSurname, newAge, newGender, newRole, newAddress), stipend(newStipend), courseWork(newCourseWork)
    {
    }

    int getStipend()
    {
        return stipend;
    }

    CourseWork getCourseWork()
    {
        return courseWork;
    }

    void printData()
    {
        Data();
        cout << "Stipend: " << getStipend() << endl;
        cout << "CourseWork: " << endl << "Title: " << getCourseWork().getTitle()
            << endl << "Desription: " << getCourseWork().getDescription()
            << endl << "Delivery date: " << getCourseWork().getDeliveryDate() << endl;
    }
};