#include<iostream>
using namespace std;


void main()

{
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    //поиск повторений
    for (int i = 0; i < n; i++)
    {
        int met_before = false;//предположим что выбранное значение раньше не встречалось, но это нужно проверить
        for (int j = 0; j< i; j++)
        {
            if (arr[i] == arr[j])
            {
                met_before = true;
                break;
            }
        }
        if (met_before)continue;//ключевое слово прерыввает текущую итерацию в текущем форе


        if (!met_before)
        {
            int repeats = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    repeats++;
                }
            }
            if (repeats > 0)cout << "Значение" << arr[i] << "повторяется" << repeats << "раз" << endl;
        }
    }
}