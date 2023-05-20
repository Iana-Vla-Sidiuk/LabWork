//Создайте целочисленный массив, напишите функцию int* findMax(int* arr, int size), возвращающую указатель на максимальный элемент.
//Поиск максимума в самой функции реализовать через указатель.
#include <iostream>
using namespace std;

int* findMax(int* arr, int size) //создаем функцию поиска максимального элемента массива
{
    int* ptrsize = &size; //указатель на размер массива
    int max = arr[0];
    int* ptrmax = &max; //указатель на максимальный элемент массива
    for (int i = 1; i < *ptrsize; i++) //поиск максимального элемента через цикл
    {
        if (arr[i] > *ptrmax)
            *ptrmax = arr[i];
    }
    return &max; //возвращаем указатель на максимальный элемент массива
}
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
    //вызываем функцию и выводим в консоль значение и адрес максимального элемента массива
    cout << * findMax(arr, size) << " - максимальный элемент массива по адресу: " << findMax(arr, size) << endl;
   
    system("pause");
    return 0;
}
