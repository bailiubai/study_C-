#include<iostream>

using namespace std;

int main() {

	int arr[3][3] = {
		{0,1,2},
		{3,4,5},
		{6,7,8}
	};
	cout << "��һλ������" << arr[0][0]+arr[0][1]+arr[0][2] << endl;
	cout << "�ڶ�λ������" << arr[1][0] + arr[1][1] + arr[1][2] << endl;
	cout << "����λ������" << arr[2][0] + arr[2][1] + arr[2][2] << endl;
	system("pause");


	return 0;

}