#include<iostream>
using namespace std;

#define ARR_1
//#define ARR_2


void main()

{
    setlocale(LC_ALL, "");
    

   
#ifdef ARR_1
   
    const int SIZE = 5;                    //размер массива , объявлена константа значение равно 5         
    int arr[SIZE]={10,12,24,-10,-6};       //имя массива 
    //arr[0] = 10;                         //1//обращение на запись          
    //arr[1] = 12;                         //2// [i] - порядковый номер массива - индекс
    //arr[2] = 24;                         //3
    //arr[3] = -10;                        //4
    //arr[4] = -6;                         //5
    
    //код, который показывает значение массива при вводимом элементе с клавиатуры
    int nomber = 0;
    cout << "Введите номер массива: "; cin >> nomber;
    cout << "элемент массива: " << arr[nomber-1] << endl;

    //код, который вычисляет сумму элементов массива
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;

    //код, который вычисляет среднеарифметическое значение массива
    int arg = 0;
    for (int i = 0; i < SIZE; i++)
    {
        arg = sum / SIZE;
    }
    cout << "Среднеариф элементов: " << arg << endl;

    //код, который находит минимальное значение в масииве
    int min = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Минимальное значение массива: " << min << endl;

    //код, который находит максимальное значение в массиве
    int max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "Максимальное значение массива: " << max << endl;



   
#endif
    
    // код, в котором значение элемента массива вводим с клавиатуры
#ifdef ARR_2

    const int SIZE = 3;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Ведите значение элемента: " << endl;
        cin >> arr[i];
    }
    cout << endl;


#endif // ARR_2


    
  

}
