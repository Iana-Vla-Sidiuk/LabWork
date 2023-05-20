// Даны две строки. Определите, совпадают ли они, сравнив их посимвольно. Напишите для этого функцию bool Compare(string S1, string S2). 
// Вход: две строки. Выход : слово yes, если строки совпадают, слово no в противном случае.

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
bool Compare(string S1, string S2) //создаем функцию, которая проверяет, совпадают ли 2 строки
{
    int i = 0;
    //посимвольно сравниваем 2 строки и считаем кол-во совпадающих символов
    while (i < S1.length()) {
        if (S1[i] == S2[i])
            i++;
        else
            break;
    }
    return(i == S1.length()); //возвращаем true, если все символы в 2 строках равны
}
int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    string S1, S2; //создаем 2 строковые переменные
    cout << "Введите 1 строку:" << endl;
    getline(cin, S1); //ввод строк осуществляем через getline, чтобы учитывались символы после пробелов
    cout << "Введите 2 строку:" << endl;
    getline(cin, S2);
    //вызываем функцию и выводим yes, если 2 строки совпадают, no - если 2 строки не совпадают
    cout << (Compare(S1,S2) == true ? "yes" : "no") << endl;
    system("pause");
    return 0;
}
