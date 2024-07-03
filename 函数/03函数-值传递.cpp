#include<iostream>

using namespace std;

//定义加法函数
void swap(int num1, int num2) {
	cout << "交换前的num1:" << num1 << endl;
	cout << "交换前的num2:" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后的num1:" << num1 << endl;
	cout << "交换后的num2:" << num2 << endl;
}

//值传递-形参是没法改变实参的
int main03() {

	//mian函数中调用add函数
	int a = 1;
	int b = 2;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}