#include<iostream>

using namespace std;

int main02() {
	//数组名的用途
	//1.可以通过数组名统计整个数组占用内存的大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整合数组占用的内存空间：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间：" << sizeof(arr[0]) << endl;
	cout << "数组的长度:" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2.可以通过数组名查看数组首地址
	cout << "数组首地址：" << (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int) & arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;
	//数组名是一个常量 ，不可以进行赋值操作
	//arr = 100;
	system("pause");

	return 0;

}