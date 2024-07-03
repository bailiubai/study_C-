#include<iostream>

using namespace std;

int main03() {

	int arr[5] = { 300,350,200,400,250 };

	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	cout << "体重最重的小猪的体重是：" << max << endl;
	system("pause");

	return  0;
}