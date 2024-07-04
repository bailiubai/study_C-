#include<iostream>
using namespace std;

//实现两个数字进行交换
void swap01(int a,int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
}

void swap02(int* a, int* b) {
	int* temp = a;
	a = b;
	b = temp;
	cout << "swap02 a=" << *a << endl;
	cout << "swap02 b=" << *b << endl;
}

void swap03(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap03 a=" << *a << endl;
	cout << "swap03 b=" << *b << endl;
}
int main06() {

	//指针和函数
	//1、指传递
	int a = 10;
	int b = 20;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap01(a, b);
	//地址指传递
	swap02(&a, &b);
	cout << "===================================swap2" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "===================================swap3" << endl;

	//2、地址传递
	swap03(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}