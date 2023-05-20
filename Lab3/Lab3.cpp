// Создайте и продемонстрируйте работу функции void showArray(int array[], int size), выводящей на консоль элементы массива.
//Вывод реализовать внутри функции через 2 указателя int* start, int* end: на текущий элемент и последний элемент массива.


#include <iostream>
using namespace std;

void showArray(int array[], int size)// создаем функцию для вывода в консоль элементов массива
{
    int i;
    int* start = &i; //создаем указатель на текущий элемент массива
    int* end = &size; //создаем указатель на последний элемент массива
    for (*start = 0; *start < *end; i++) //выводим в консоль элементы массива через цикл
        cout << *start << " элемент массива = " << array[*start] << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int array[10]; //создаем целочисленный массив
    int size = end(array) - begin(array);
    srand(time(NULL));
    for (int i = 0; i < size; i++) //заполняем массив случайными числами и выводим его в консоль
    array[i] = rand() % 1000;
    showArray(array, size);//вызываем функцию для вывода в консоль элементов массива
    system("pause");
    return 0;
}
