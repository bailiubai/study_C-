#include<iostream>

using namespace std;

int main05() {

	//����ð������ʵ����������
	int arr[5] = { 300,350,200,400,250 };

	cout << "����ǰ�����飺";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",\t";
	}
	cout << "" << endl;
	//����
	for (int i = 0; i < 5-1; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++) {
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "���������飺";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",\t";
	}
	cout << "" << endl;

	system("pause");

	return  0;
}