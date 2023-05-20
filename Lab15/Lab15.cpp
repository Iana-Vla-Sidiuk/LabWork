// (A) Напишите функцию bool IsDigit(unsigned char c), определяющую, является ли данный символ цифрой или нет. Напишите программу, 
// которая получает на вход один символ и выводит строку yes, если символ является цифрой и строку no, в противном случае.

#include <iostream>
#include <windows.h>
using namespace std;

bool IsDigit(unsigned char c) //создаем функцию, которая проверяет по коду символа является символ числом или нет
{
    return((int)c > 47 && (int)c < 58);
}
int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    unsigned char c; //создаем переменную для ввода символа
    cout << "Введите любой символ:" << endl;
    cin >> c; 
    //вызываем функцию и выводим yes, если символ является цифрой и no - в противном случае
    cout << (IsDigit(c) == true ? "yes" : "no") << endl; 
    system("pause");
    return 0;
}
