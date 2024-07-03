#include<iostream>

using namespace std;

//定义加法函数
int add1(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main02() {

	//mian函数中调用add函数
	int sum = add1(1, 2);

	cout << sum << endl;

	system("pause");
	return 0;
}