// lab-6.task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;

class Student
{
private:
    int age;
    int stipend;
    string gender;

public:
    int getAge()
    {
        return age;
    }

    void setAge(int newAge)
    {
        age = newAge;
    }

    string getGender()
    {
        return gender;
    }

    void setGender(const string& newGender)
    {
        gender = newGender;
    }

    int getStipend()
    {
        return stipend;
    }

    void setStipend(int newStipend)
    {
        stipend = newStipend;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student student1;
    Student student2;
    student1.setAge(18);
    student1.setGender("чоловік");
    student1.setStipend(2000);
    student2.setAge(19);
    student2.setGender("чоловік");
    student2.setStipend(1150);
    cout << "Перший студент: \nВік: " << student1.getAge() << "\nСтать: " << student1.getGender() << "\nСтипендія: " << student1.getStipend() << endl;
    cout << "Другий студент: \nВік: " << student2.getAge() << "\nСтать: " << student2.getGender() << "\nСтипендія: " << student2.getStipend() << endl;
    int sum;
    float mid;
    mid = (float(student1.getAge()) + float(student2.getAge())) / 2;
    sum = student1.getStipend() + student2.getStipend();
    cout << "Середній вік: " << mid << endl << "Суммарна стипендія: " << sum << endl;
    system("pause");
    return 0;
}