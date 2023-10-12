// lab-6.task5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    Student() : age(0), gender(""), stipend(0)
    {
        cout << "Створено студента" << endl;
    }

    ~Student()
    {
        cout << "Студент був видалений" << endl;
    }

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

    void in()
    {
        cout << "Введіть вік студента: ";
        cin >> age;

        cout << "Введіть стать студента: ";
        cin >> gender;

        cout << "Введіть стипендію студента: ";
        cin >> stipend;
    }

    void print()
    {
        cout << "Вік студента: " << age << endl;
        cout << "Стать студента: " << gender << endl;
        cout << "Стипендія студента: " << stipend << endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student student1;
    Student student2;
    Student student3;
    student1.setAge(18);
    student1.setGender("чоловік");
    student1.setStipend(2000);
    student2.setAge(19);
    student2.setGender("чоловік");
    student2.setStipend(1150);
    cout << "Перший студент: \nВік: " << student1.getAge() << "\nСтать: " << student1.getGender() << "\nСтипендія: " << student1.getStipend() << endl;
    cout << "Другий студент: \nВік: " << student2.getAge() << "\nСтать: " << student2.getGender() << "\nСтипендія: " << student2.getStipend() << endl;

    student3.in();
    student3.print();
    system("pause");
    return 0;
}