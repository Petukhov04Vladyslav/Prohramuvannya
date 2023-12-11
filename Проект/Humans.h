#pragma once
#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

class Humans
{
private:
    vector<Human*> humans;

public:
    void addHuman(Human *human)
    {
        humans.push_back(human);
    }

    void getHumans()
    {
        for (size_t i = 0; i < humans.size(); i++)
        {
            cout << "Human " << i + 1 << endl;
            humans[i]->printData();
            cout << endl;
        }
    }

    void sortByAge()
    {
        for (size_t i = 0; i < humans.size(); i++)
        {
            for (size_t j = 0; j < humans.size() - 1 - i; ++j)
            {
                if (humans[j]->getAge() < humans[j + 1]->getAge())
                {
                    swap(humans[j], humans[j + 1]);
                }
            }
        }
    }

    void findByName()
    {
        string printName, printSurname;
        cout << "Search human by name: ";
        cin >> printName >> printSurname;
        bool found = false;

        for (size_t i = 0; i < humans.size(); i++)
        {
            if (printName == humans[i]->getName() && printSurname == humans[i]->getSurname())
            {
                cout << endl;
                humans[i]->printData();
                cout << endl;
                found = true;
            }
        }

        if (!found)
        {
            cout << "No data" << endl;
        }
    }
};