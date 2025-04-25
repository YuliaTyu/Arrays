#include<iostream>
using namespace std;

//#define ARR_1
//#define ARR_2
//#define ARR_3

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

    //Вывод массива в прямом порядке
    for (int i = 0; i <= nomber; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl; 
    //Вывод массива в обратном порядке
    for (int i = nomber; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    //код, который вычисляет сумму элементов массива
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;

    //код, который вычисляет среднеарифметическое значение массива
    double arg = 0;
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

    //код, который делает сортировку массива СОРТИРОВКА ВЫБОРОМ 
    for (int i = 0; i < SIZE; i++)//счетчик выбирает элемент, в который нужно поместить мин занчение
    {
        for (int j = i+1; j < SIZE; j++)//счетчик перебирает элементы в поисках мин значения
        {
            //arr[i] - выбрнный
            //arr[j] - перебираем
            if (arr[j] < arr[i])
            {
                int buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
        {
        cout << arr[i] << "\t";
        }
    cout << endl;

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

    //генерация случайных чисел
    //for (int i = 0; i < nomber; i++)
    //{
    //   arr[i] = rand()%100;
    //}

#ifdef ARR_3



    const int n = 5;
    int arr[n] = { 3,5,8 };
    arr[1] = 1024;
    cout << arr[1]<< endl;
    int minRand, maxRand;
    do {
        cout << "Введите мин число"; cin >> minRand;
        cout << "Введите макс число"; cin >> maxRand;
        if (minRand > maxRand)cout << " min < max" << endl;
        if (minRand == maxRand)cout << "Разные " << endl;
    } while (minRand >= maxRand);

    /*if (maxRand < minRand)
    {
        int buffer = minRand;
        minRand = maxRand;
        maxRand = buffer;
    }*/

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (maxRand - minRand) + minRand;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

#endif // DEBUG



}
