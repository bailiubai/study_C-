#include<iostream>
using namespace std;

int main05() {

	//指针和数组
	//利用指针访问数组中的数据
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "第一个元素为：" << arr[0] << endl;

	int* p = arr;//arr就是数组首地址
	cout << "利用指针访问数组第一个元素:" << *p <<"第一个元素的地址指："<<p << endl;

	p++;//让指针指向的地址值向后偏移4个字节
	cout << "利用指针访问数组的第二个元素：" << *p << "第二个元素的地址指：" << p << endl;

	cout << "利用指针遍历数组" << endl;
	int* p2 = &arr[1];
	for (int i = 0; i < 10; i++) {
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}