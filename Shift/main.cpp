#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "");
	const int SIZE = 15;
	int arr[SIZE] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int n;
	cout << "Массив: " << endl;
	for (int i = 0; i < SIZE; i++) cout << arr[i] << "\t";
	cout << endl;
	cout << "Количество сдвигов: "; cin >> n;
	cout << endl;
	cout << "Массив измененный: " << n;
	cout << endl;
	for (int i = n; i < SIZE; i++) cout << arr[i] << "\t";
	for (int i = 0; i < n; i++) cout << arr[i] << "\t";
	cout << endl;
	

}