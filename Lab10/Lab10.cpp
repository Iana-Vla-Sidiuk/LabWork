// Создайте целочисленный массив из 15 элементов, заполненный по порядку.
//Создайте и продемонстрируйте работу функции void shuffleArr(int* arr, int size), 
//которая переставляет элементы массива в случайном порядке.

#include <iostream>
using namespace std;

void shuffleArr(int* arr, int size)
//перемешиваем в случайном порядке элементы массива с помощью алгоритма перетасовки Фишера-Йейтса и выводим массив в консоль
{
    for (int i = size - 1; i > 0; i--)
    {
        int j = rand() % i;
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        cout << i << " элемент массива = " << arr[i] << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[15]; //создаем целочисленный массив из 15 элементов
    int size = end(arr) - begin(arr);
    srand(time(NULL));
    for (int i = 0; i < size; i++) //заполняем массив случайными числами и выводим его в консоль
    {
        arr[i] = rand() % 1000;
        cout << i << " элемент массива = " << arr[i] << endl;
    }
    
    cout << "Вывод массива после перестановки его элементов в случайном порядке:" << endl;
    shuffleArr(arr, size); //вызываем функцию перестановки элементов массива в случайном порядке       
    system("pause");
    return 0;
}
