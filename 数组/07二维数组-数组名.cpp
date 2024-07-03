#include<iostream>

using namespace std;

int main07() {

	//二维数组名称的用途

	
	//1. 可以查看占用空间大小
	int arr2[2][3] = {
		{0,1,2},
		{3,4,5}
	};
	cout <<"二维数组占用内存空间为："<<sizeof(arr2) << endl;
	//2. 可以查看二维数组的首地址
	cout << "首地址:" << (int)arr2 << endl;
	cout << "第一个元素首地址:" << (int)&arr2[0][0] << endl;

	system("pause");


	return 0;

}