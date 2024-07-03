#include<iostream>

using namespace std;

int main01() {

	//1.定义一个指针
	int a = 10;
	//指针定义的语法：数据类型*指针变量名
	int* p;
	//让指针记录变量a的地址
	p = &a;

	cout << "变量a的地址:" << &a << endl;
	cout << "指针p:" << p << endl;
	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加  * 代表解引用，找到指针指向的内存中的数据

	*p = 100;
	cout << "变量a:" << a << endl;   
	cout << "指针*p:" << *p << endl;
	system("pause");

	return 0;
}