#pragma once
#include <iostream>
#include "Student.h"
#include "Humans.h"

using namespace std;

class Statistics
{
public:
    static float calculateTotalStipend(vector<Student>& students)
    {
        float totalStipend = 0;
        for (int i = 0; i < students.size(); i++)
        {
            totalStipend += students[i].getStipend();
        }
        return totalStipend;
    }

    static float calculateAverageAge(vector<Student>& students)
    {
        float totalAge = 0;
        for (int i = 0; i < students.size(); i++)
        {
            totalAge += students[i].getAge();
        }
        return totalAge / students.size();
    }
};