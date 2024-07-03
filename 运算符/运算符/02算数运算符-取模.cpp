#include<iostream>

using namespace std;


int main02() {

	//取模运算本质，就是求余数
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;
	cout << b1 % a1 << endl;

	//两个小数不可以做取模运算

	double d1 = 0.1;
	double d2 = 0.2;
	//cout << d1 % d2 << endl;

	system("pause");

	return 0;

}