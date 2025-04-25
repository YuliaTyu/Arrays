#include<iostream>
using namespace std;


void main()

{
    setlocale(LC_ALL, "");

    // заполнени массива уникальными случайными числами
    const int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        bool unique;
        do
        {             
            arr[i] = rand() % 10;
            unique = true;//предположим сгенерировалось уникальное случайное число
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    unique = false;
                    break;//ключевое слово прерывает текущую итерацию и все последующие итерации!!
                }
            }
        } while (!unique);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
        cout << endl;
    
}