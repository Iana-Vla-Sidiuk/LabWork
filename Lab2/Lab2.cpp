// Создайте функцию void correct(int **x) для проверки переменной на отрицательное значение.Функция принимает указатель на адрес целой
//переменной переменную, если значение самой переменной отрицательное, то установить адрес переменной в NULL.
//Ввод и вывод значений – в методе main(). Вход: целое число, Выход : адрес числа или NULL.


#include <iostream>
using namespace std;

void correct(int**& x)// создаем функцию для проверки переменной на отрицательное значение
{ int t = **x;
    if (t < 0)
        *x = NULL;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число ";
    int number;
    cin >> number;
    int* p = &number;
    int** p2 = &p;
    correct(p2); //вызываем функцию 

    cout << p << endl; //выводим адрес числа или NULL
    system("pause");
    return 0;
}