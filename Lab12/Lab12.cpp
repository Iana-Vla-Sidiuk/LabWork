// Создайте и продемонстрируйте работу функции int* generateRandomArray(int n), 
//возвращающей указатель на массив из n случайных чисел. Массив создается внутри функции как статическая переменная.

#include <iostream>
using namespace std;

int* generateRandomArray(int n)
{
    static int* arr = new int[n]; //создаем статическую переменную - целочисленный динамический массив из n элементов
    srand(time(NULL));
    for (int i = 0; i < n; i++) //заполняем массив случайными числами 
        arr[i] = rand() % 1000;
    return arr;
    delete[] arr; //очищаем память
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите кол-во элементов в массиве: " << endl;
    cin >> n;
    //вызываем функцию, которая создает массив из n случайных чисел и возвращает указатель на массив
    int* arr2 = generateRandomArray(n); 
    for (int i = 0; i < n; i++) //выводим массив в консоль
        cout << i << " элемент массива = " << arr2[i] << endl;
    system("pause");
    return 0;
}





