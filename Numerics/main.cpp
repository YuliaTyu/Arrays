#include<iostream>
using namespace std;

//#define BINARY

void main()

{
    setlocale(LC_ALL, "");
   
    int decimal; //переменная хранит 10 ное число ввденное пользователем
    cout << "Ведите десятичное число "; cin >> decimal;

#ifdef BINARY
    const int n = 32; //максимально возможная разрадность инт числа байта 4 байта * 8 битт
    bool binary[n] = {};// этот массив будет хранит разряды двоичного числа
    int i = 0;
    for (; decimal; decimal >>= 1)
        binary[i++] = decimal & 1 ;
    
    for (--i; i >= 0; i--)
    {
        cout << binary[i];
        if (i % 8 == 0) cout << " ";
        if (i % 4 == 0) cout << " ";
    }
    cout << endl;

#endif

    const int n = 8;
    char hex[n] = {};
    int i = 0;
    for (; decimal; decimal /= 16)
            hex[i++] = decimal % 16;
    for (--i; i >= 0; i--)
        cout << char(hex[i]<10?hex[i]+48:hex[i]+55);
    cout << endl;

}