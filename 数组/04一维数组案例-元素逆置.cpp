#include<iostream>

using namespace std;

int main04() {

	int arr[5] = { 300,350,200,400,250 };

	int max = 0;
	cout << "����ǰ�����飺" ;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<",\t";
	}
	cout << "" << endl;
	//����
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}

	cout << "���ú�����飺";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",\t";
	}
	cout << "" << endl;
	system("pause");

	return  0;
}