// Лаб.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <cstring>
using namespace std;

char tolowerR(char ch) 
{
    if (ch >= 'А' && ch <= 'Я') 
    {
        return ch + 32;
    }
    else if (ch == 'Ї') 
    {
        return 'ї';
    }
    else if (ch == 'І') 
    {
        return 'і';
    }
    return ch;
}

char toupperR(char ch) 
{
    if (ch >= 'а' && ch <= 'я') 
    {
        return ch - 32;
    }
    else if (ch == 'ї') 
    {
        return 'Ї';
    }
    else if (ch == 'і') 
    {
        return 'І';
    }
    return ch;
}


bool isalphaR(char ch) 
{
    return (ch >= 'А' && ch <= 'Я') || (ch >= 'а' && ch <= 'я')
        || (ch == 'Ї') || (ch == 'ї') ||
        (ch == 'І') || (ch == 'і');
}


bool islowerR(char ch) 
{
    return (ch >= 'а' && ch <= 'я') || (ch == 'ї') || (ch == 'і');
}


bool isupperR(char ch) 
{
    return (ch >= 'А' && ch <= 'Я') || (ch == 'Ї') || (ch == 'І');
}


bool isalnumR(char ch) 
{
    return isalphaR(ch) || isdigit(ch);
}

unsigned long Perimeter(int side1, int side2) 
{
    return 2 * (static_cast<unsigned long>(side1) + static_cast<unsigned long>(side2));
}

int Divide(int num1, int num2)
{
    if (num2 == 0)
    {
        return -1;
    }
    else
    {
        cout << num1 / num2;
    }
}

bool check()
{
    string userInput;
    cout << "Введіть символ: ";
    cin >> userInput;
    if (userInput == "Y" || userInput == "y" || userInput == "д" || userInput == "Д")
    {
        return true;
    }
    else
    {
        return false;
    }
}

inline int charToNumericValue(char c) 
{
    return static_cast<int>(c);
}

void buildFullAddress(char& fullAddress1, const char& city1, const char& district1, const char& street1, const char& house1) 
{
    strcpy_s(&fullAddress1, 100, &city1);
    strcat_s(&fullAddress1, 100, ", ");
    strcat_s(&fullAddress1, 100, &district1);
    strcat_s(&fullAddress1, 100, ", вул. ");
    strcat_s(&fullAddress1, 100, &street1);
    strcat_s(&fullAddress1, 100, ", буд. ");
    strcat_s(&fullAddress1, 100, &house1);
}

// Функція для розрахунку довжини рядка
int calculateLength(const char& str) {
    return strlen(&str);
}

int addNumbers(int i, int j = 0) 
{
    return i + j;
}

bool areEqual1(int a, double b) 
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool areEqual2(double a, float b) 
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool areEqual3(int a, float b) 
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "TASK 1:" << endl;
    double a, b, c, x_1, x_2, D;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    D = b * b - 4 * a * c;
    if (D >= 0)
    {
        x_1 = (-b - sqrt(D)) / (2 * a);
        x_2 = (-b + sqrt(D)) / (2 * a);
        cout << "x_1 = " << x_1 << endl << "x_2 = " << x_2 << endl;
    }
    else
    {
        cout << "D is less than 0" << endl;
    }



    cout << "TASK 2:" << endl;
    double d, e, f, x;
    cout << "Enter first side: ";
    cin >> d;
    cout << "Enter second side: ";
    cin >> e;
    cout << "Enter angle: ";
    cin >> x;
    if (x > 180)
    {
        x -= 180;
    }
    f = sqrt(d * d + e * e - 2 * d * e * cos(x));
    cout << "Third side is " << f << endl;



    cout << "TASK 3:" << endl;
    int x1, y1, x2, y2, distance;
    cout << "First point:" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "Second point:" << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;
    distance = abs((x1 - x2) * 2 + (y1 - y2) * 2);
    cout << "Distance: " << distance << endl;



    cout << "TASK 5:" << endl;
    srand(static_cast<unsigned int>(time(0)));
    int randomnums[4];
    cout << "Random numbers: ";
    for (int i = 0; i < 4; i++)
    {
        randomnums[i] = rand() % 20;
        cout << randomnums[i] << " ";
    }
    cout << endl;




    cout << "TASK 6:" << endl;
    char buffer[100];
    cout << "Введіть рядок у форматі С-стилю: ";
    cin >> buffer;
    int integerNumber = atoi(buffer);
    long longNumber = atol(buffer);
    double doubleNumber = atof(buffer);
    cout << "Ціле число: " << integerNumber << endl;
    cout << "Довге число: " << longNumber << endl;
    cout << "Речове число: " << doubleNumber << endl;




    cout << "TASK 7:" << endl;
    char ch = 'І';
    cout << "tolowerR('" << ch << "') = '" << tolowerR(ch) << "'" << endl;
    cout << "toupperR('" << ch << "') = '" << toupperR(ch) << "'" << endl;
    cout << "isalphaR('" << ch << "') = " << isalphaR(ch) << endl;
    cout << "islowerR('" << ch << "') = " << islowerR(ch) << endl;
    cout << "isupperR('" << ch << "') = " << isupperR(ch) << endl;
    cout << "isalnumR('" << ch << "') = " << isalnumR(ch) << endl;




    cout << "TASK 8:" << endl;
    const int maxLength = 100;
    char city[maxLength] = "Олешки";
    char district[maxLength] = "Санаторій";
    char street[maxLength] = "Велика Садова";
    char house[maxLength] = "130";
    char fullAddress[maxLength] = "";

    strcpy_s(fullAddress, city);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, district);
    strcat_s(fullAddress, ", вул. ");
    strcat_s(fullAddress, street);
    strcat_s(fullAddress, ", буд. ");
    strcat_s(fullAddress, house);

    int cityLength = strlen(city);
    int districtLength = strlen(district);
    int streetLength = strlen(street);
    int houseLength = strlen(house);
    int fullAddressLength = strlen(fullAddress);

    cout << "Довжина міста: " << cityLength << " символів" << endl;
    cout << "Довжина району: " << districtLength << " символів" << endl;
    cout << "Довжина вулиці: " << streetLength << " символів" << endl;
    cout << "Довжина будинку: " << houseLength << " символів" << endl;
    cout << "Довжина всієї адреси: " << fullAddressLength << " символів" << endl;
    cout << "Повна адреса: " << fullAddress << endl;

    if (cityLength > districtLength) 
    {
        cout << "Місто довше за район" << endl;
    }
    else if (cityLength < districtLength) 
    {
        cout << "Район довший за місто" << endl;
    }
    else 
    {
        cout << "Місто і район мають однакову довжину" << endl;
    }




    cout << "TASK 9 AND 10:" << endl;
    int side1 = 5;
    int side2 = 7;
    unsigned long perimeter = Perimeter(side1, side2);
    cout << "Периметр: " << perimeter << endl;




    cout << "TASK 11:" << endl;
    cout << "По-перше, неправильне підключення бібліотеки <iostream>.\n"
        << "По-друге, при виклику функції, треба передавати конкретне значення, а не int.\n"
        << "По-третє, тип void не може повертати значення. Щоб повертати значення, треба int, замість void." << endl;




    cout << "TASK 12:" << endl;
    int num1, num2;
    num1 = 8;
    num2 = 4;
    Divide(num1, num2);




    cout << endl << "TASK 14:" << endl;
    bool result = check();
    if (result)
    {
        cout << "Істинно" << endl;
    }
    else
    {
        cout << "Брехня" << endl;
    }




    cout << "TASK 15:" << endl;
    char userInput;
    cout << "Введіть символ: ";
    cin >> userInput;
    int numericValue = charToNumericValue(userInput);
    cout << "Числове значення символу '" << userInput << "' є " << numericValue << endl;




    cout << "TASK 17:" << endl;
    char city1[maxLength] = "Олешки";
    char district1[maxLength] = "Санаторій";
    char street1[maxLength] = "Велика Садова";
    char house1[maxLength] = "130";
    char fullAddress1[maxLength] = "";

    buildFullAddress(*fullAddress1, *city1, *district1, *street1, *house1);

    int cityLength1 = calculateLength(*city1);
    int districtLength1 = calculateLength(*district1);
    int streetLength1 = calculateLength(*street1);
    int houseLength1 = calculateLength(*house1);
    int fullAddressLength1 = calculateLength(*fullAddress1);

    cout << "Довжина міста: " << cityLength1 << " символів" << endl;
    cout << "Довжина району: " << districtLength1 << " символів" << endl;
    cout << "Довжина вулиці: " << streetLength1 << " символів" << endl;
    cout << "Довжина будинку: " << houseLength1 << " символів" << endl;
    cout << "Довжина всієї адреси: " << fullAddressLength1 << " символів" << endl;

    if (cityLength1 > districtLength1)
    {
        cout << "Місто довше за район" << endl;
    }
    else if (cityLength1 < districtLength1)
    {
        cout << "Район довший за місто" << endl;
    }
    else
    {
        cout << "Місто і район мають однакову довжину" << endl;
    }




    cout << "TASK 18:" << endl;
    int num_1 = 5;
    int num_2 = 7;
    int result1 = addNumbers(num_1, num_2);
    cout << "Результат 1: " << result1 << endl;
    int result2 = addNumbers(num_1);
    cout << "Результат 2: " << result2 << endl;




    cout << "TASK 19:" << endl;
    int int1 = 4, int3 = 7;
    double double1 = 3.14, double2 = 1.6;
    float float2 = 1.6, float3 = 7;

    bool res1 = areEqual1(int1, double1);
    bool res2 = areEqual2(double2, float2);
    bool res3 = areEqual3(int3, float3);

    cout << "Результат для першої: " << res1 << endl;
    cout << "Результат для другої: " << res2 << endl;
    cout << "Результат для третьої: " << res3 << endl;
    return 0;
}