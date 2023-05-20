﻿//Создайте целочисленный массив и указатель, выведите через указатель в обратном порядке элементы массива с их индексами и адресами.
//Вывод организуйте через цикл while с использованием в условии проверки только указателей.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[10]; //создаем целочисленный массив
    int size = end(arr) - begin(arr);
    srand(time(NULL));
    for (int i = 0; i < size; i++) //заполняем массив случайными числами и выводим его в консоль
    {
        arr[i] = rand() % 1000;
        cout << i << " элемент массива = " << arr[i] << endl;
    }
    int i = size - 1;
    int* ptri = &i; //указатель на текущий элемент массива
    int end = -1;
    int* ptrend = &end; //указатель на конечный элемент массива
    cout << "Вывод массива в обратном порядке с индексами и адресами:" << endl;
    while (* ptri > * ptrend) //вывод массива в обратном порядке через цикл while, в условии только указатели
    {
        cout << i << " элемент массива = " << arr[i] << " , адрес: " << &arr[i] << endl;
        i--;
    }
    system("pause");
    return 0;
}