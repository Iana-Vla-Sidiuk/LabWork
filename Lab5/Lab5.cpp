// Создайте целочисленный массив, напишите функцию double getAverage(int* arr, int size), 
//вычисляющую среднее арифметическое элементов массива.

#include <iostream>
using namespace std;

double getAverage(int* arr, int size)//создаем функцию, вычисляющую среднее арифметическое элементов в массиве
{
    double sum = 0;
    for (int i = 0; i < size; i++) //считаем сумму для среднего арифметического через цикл
        sum = sum + arr[i];
    return sum / size;//возвращаем значение среднего арифметического элементов в массиве
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[10]; //создаем целочисленный массив
    int size = end(arr) - begin(arr);
    srand(time(NULL));
    for (int i = 0; i < size; i++) //заполняем массив случайными числами и выводим его в консоль
    {
        arr[i] = rand() %1000;
        cout << i << " элемент массива = " << arr[i] << endl;
    }
        //вызываем функцию, вычисляющую среднее арифметическое элементов массива и выводим значение функции в консоль
        cout << "Среднее арифметическое элементов массива = " << getAverage(arr, size) << endl;
    system("pause");
    return 0;
}
