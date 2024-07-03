#include<iostream>

using namespace std;

int Sizemain() {

	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "short短整型的数据大小：" << sizeof(num1) << endl;
	cout << "int整型的数据大小：" << sizeof(num2) << endl;
	cout << "long长整型的数据大小：" << sizeof(num3) << endl;
	cout << "long long 长长整型的数据大小：" << sizeof(num4) << endl;
	system("pause");

	//整型大小比较
	//short < int <= long <= long long
	return 0;

}