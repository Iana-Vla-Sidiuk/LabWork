// Выведите на экран все возможные символы с ASCII-кодами от 32 до 255 и их ASCII - коды
//(символы с кодами до 32 являются служебными и их вывод на экран может привести к забавным последствиям).
//Формат вывода: сначала ASCII - код, затем символ, например, 33 !
    
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned char c;
    for (int i = 32; i < 256; i++) //выводим через цикл символы с кодами от 32 до 255
    {
        c = i;
        cout << (int)c << " " << c << endl;
    }
    system("pause");
    return 0;
}
