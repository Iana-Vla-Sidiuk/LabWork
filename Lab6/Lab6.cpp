//Создайте целочисленный массив, напишите функцию void change(int* arr, int n, int val), 
//изменяющую значение элемента массива с номером n на val. Изменение осуществить через указатель.
#include <iostream>
using namespace std;

void change(int* arr, int n, int val) //создаем функцию, изменяющую значение элемента массива с номером n на val
{
    int* ptrn = &n;
    int* ptrval = &val;
    arr[*ptrn] = *ptrval; //меняем значения через указатели
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
    int n, val;
    cout << "Введите номер элемента массива от 0 до 9: " << endl;
    cin >> n;
    cout << "Введите любое число от -1000 до 1000: " << endl;
    cin >> val;
    if (n < 0 || n > 9 || val < -1000 || val > 1000)
    {
        cout << "Номер элемента массива должен быть > -1 и < 10! Число должно быть > -1001 и < 1001!" << endl;
        exit;
    }
    else {
        change(arr, n, val); //вызываем функцию, изменяющую значение элемента массива с номером n на val
        cout << "Значение " << n << " элемента массива = " << arr[n] << endl; //выводим в консоль новое значение элемента n
        for (int i = 0; i < size; i++) //выводим элементы массива после вызова функции
        {
            cout << i << " элемент массива = " << arr[i] << endl;
        }
    }
    system("pause");
    return 0;
}
