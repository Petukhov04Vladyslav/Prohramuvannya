// lab-6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;


class Student
{
private:
    int age, stipend;
    string gender;
public:
    int get_age = age;
    string get_gender = gender;
    int get_stipend = stipend;
    
    Student(): get_age(0), get_gender(""), get_stipend(0) 
    {
        cout << "Створено студента" << endl;
    }

    ~Student() 
    {
        cout << "Студент був видалений" << endl;
    }

    void in() 
    {
        cout << "Введіть вік студента: ";
        cin >> get_age;

        cout << "Введіть cтать студента: ";
        cin >> get_gender;

        cout << "Введіть стипендію студента: ";
        cin >> get_stipend;
    }

    void print() 
    {
        cout << "Вік студента: " << get_age << endl;
        cout << "Стать студента: " << get_gender << endl;
        cout << "Стипендія студента: " << get_stipend << endl;
    }
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student student1;
    Student student2;
    Student student3;
    student1.get_age = 18;
    student1.get_gender = "чоловік";
    student1.get_stipend = 2000;
    student2.get_age = 19;
    student2.get_gender = "чоловік";
    student2.get_stipend = 1150;
    cout << "Перший студент: \nВік: " << student1.get_age << "\nСтать: " << student1.get_gender << "\nСтипендія: " << student1.get_stipend << endl;
    cout << "Другий студент: \nВік: " << student2.get_age << "\nСтать: " << student2.get_gender << "\nСтипендія: " << student2.get_stipend << endl;
    
    student3.in();
    student3.print();
    system("pause");
    return 0;
}