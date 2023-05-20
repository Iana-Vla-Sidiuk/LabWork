// Создайте целочисленный массив из 15 элементов, заполненных случайными числами.
//Создайте и продемонстрируйте работу функции void clampArr(int* arr, int size, int min, int max), которая заменяет все
//значения, меньшие минимального на минимальное, а все значения, большие максимального на максимальное.

#include <iostream>
using namespace std;

//создаем функцию, заменяющую значения массива меньшие минимального на минимальное, 
//а все значения, большие максимального на максимальное
void clampArr(int* arr, int size, int min, int max)
{ 
    for (int i = 0; i < size; i++) 
    { 
        if (arr[i] < min) 
            arr[i] = min;
        if (arr[i] > max)
            arr[i] = max;
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
    int min;
    cout << "Введите минимальное число:" << endl;
    cin >> min;
    int max;
    cout << "Введите максимальное число:" << endl;
    cin >> max;
    cout << "Вывод измененного массива после выполения функции:" << endl;
    clampArr(arr, size, min, max);//вызываем функцию    
    for (int i = 0; i < size; i++) //выводим в консоль массив, измененный после вызова функции
        cout << i << " элемент массива = " << arr[i] << endl;
    system("pause");
    return 0;
}


