#include<iostream>
using namespace std;

//#define ARR_1
//#define ARR_2


void main()

{
    setlocale(LC_ALL, "");
    

    //���, ������� ��������� ������ �������� ������� � ���������� � ���������� ��� ��������
#ifdef ARR_1
    int n;
    cout << "������� �������:"; cin >> n;
    const int SIZE = 5;  
    int arr[5];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;

    cout << "arr" << arr[n] << endl;
    cout << endl;
#endif //

    //���, ������� ������� ������� �� ����� (�������� ������ ������������)
#ifdef ARR_2
    const int SIZE = 5;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "element\n";
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
#endif // 

   // ���, ������� ������� ������ �� ����� � ������ ������� (�� 0 �� ����������)
  

}
