﻿// Работа 5 (Рубцов юра).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    int size = 0; // Переменые
    int minNum = 0;
    int count = 0;
    int num = 0;

    cout << "Ввидите количество вводимых чисел:"; // задаем количество вводимых чисел
    cin >> size ; 
    for (int i = 0; i < size; i++)
    {
        cout << "Ввидите число:" ; //поиск мин. числа
        cin >> num;
        if (num < minNum || i == 0)
        {
            minNum = num;
        }
        else if (minNum == num)
        {
            count++;
        }
        
        

    }
    cout << "Минимальное число:" << minNum << endl; // Вывод
    cout << "Количество повторяющегося минимума:" << count << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
