#include<iostream>

using namespace std;

int main06() {

	//二维数组的定义

	//1. 
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 1;
	arr[0][2] = 1;
	arr[1][0] = 1;
	arr[1][1] = 1;
	arr[1][2] = 1;
	cout <<arr[0][0]<<endl;
	cout <<arr[0][1]<<endl;
	cout <<arr[0][2]<<endl;
	cout <<arr[1][0]<<endl;
	cout <<arr[1][1]<<endl;
	cout <<arr[1][2]<<endl;

	//2.
	int arr2[2][3] = {
		{0,1,2},
		{3,4,5}
	};
	cout << arr2[0][0] << endl;
	cout << arr2[0][1] << endl;
	cout << arr2[0][2] << endl;
	cout << arr2[1][0] << endl;
	cout << arr2[1][1] << endl;
	cout << arr2[1][2] << endl;

	//3.
	int arr3[2][3] = { 1,2,3,4,5,6 };
	cout << arr3[0][0] << endl;
	cout << arr3[0][1] << endl;
	cout << arr3[0][2] << endl;
	cout << arr3[1][0] << endl;
	cout << arr3[1][1] << endl;
	cout << arr3[1][2] << endl;

	//4.
	int arr4[][3] = { 1,2,3,4,5,6 };
	cout << arr4[0][0] << endl;
	cout << arr4[0][1] << endl;
	cout << arr4[0][2] << endl;
	cout << arr4[1][0] << endl;
	cout << arr4[1][1] << endl;
	cout << arr4[1][2] << endl;

	system("pause");

	
	return 0;

}