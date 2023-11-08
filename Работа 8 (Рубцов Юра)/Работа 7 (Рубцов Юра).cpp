﻿// Работа 7 (Рубцов Юра).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    setlocale(0, "rus");
    mt19937 gen(time(NULL)); // генератор чисел
    uniform_int_distribution<> uid(-100, 100); // равномерное распределение целых чисел на интервале
    int* a, n, idx_min(0), idx_max(0);// массив, размер массива, индексы макс. и мин. элементов
    // (положим индексы равными нулю - первый элемент массива)

// ввод размера массива и выделение памяти под него
    cout << "n = ";
    cin >> n;
    a = new int[n];

    // цикл по всем элементам массива
    for (int i = 0; i < n; i++) {
        // генерируем элемент и выводим его
        a[i] = uid(gen);
        cout << a[i] << " ";

        // среди всех элементов массива кроме первого
        if (i) {
            // ищем индекс минимального
            if (a[idx_min] > a[i]) {
                idx_min = i;
            }
            // ищем индекс максимального
            if (a[idx_max] < a[i]) {
                idx_max = i;
            }
        }
    }

    // вывод мин. элементов
    cout << endl << "МАКС: " << a[idx_max] << endl;
    cout << "МИН: " << a[idx_min];

    delete[] a; // освобождение памяти из-под массива
    return 0;
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
