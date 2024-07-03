#include<iostream>

#include"swap.h";

using namespace std;

int main() {

	cout << "1.创建.h后缀名的头文件" << endl;
	cout << "2.创建.cpp后缀名的源文件" << endl;
	cout << "3.在头文件中写函数的声明" << endl;
	cout << "4.在源文件中写函数的定义" << endl;

	int a = 10;
	int b = 20;
	swap2(a, b);
	system("pause");
	return 0;
}
