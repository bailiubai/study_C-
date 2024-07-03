#include<iostream>

using namespace std;

int Boolmain() {

	//1、创建bool类型数据
	bool f = true;

	cout << f << endl;

	f = 2;

	cout << f << endl;


	f = 0;

	cout << f << endl;

	f = false;

	cout << f << endl;

	cout << "bool所占空间：" << sizeof(f) << endl;
	system("pause");

	return 0;

}