﻿#include<iostream>
using namespace std;

#define tab "\t"
//#define ARRAYS
//#define ARRAYS_LEFT

void main()

{
	setlocale(LC_ALL, "");

#ifdef ARRAYS 

	const int SIZE = 15;
	int arr[SIZE] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int n;                                                  // количество сдвигов

	for (int i = 0; i < SIZE; i++) cout << arr[i] << tab;
	cout << endl;
	cout << "Количество сдвигов: "; cin >> n;
	cout << endl;
	cout << "Массив измененный: " << n;
	cout << endl;
	for (int i = n; i < SIZE; i++) cout << arr[i] << tab;
	for (int i = 0; i < n; i++) cout << arr[i] << tab;
	cout << endl;
#endif	

#ifdef ARRAYS_LEFT

	const int n = 15;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	
	int number_of_shifts;
	cout << "Введите количество сдвигов"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	cout << endl;
#endif // ARRAYS_LEFT


}