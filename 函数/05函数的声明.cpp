#include<iostream>

using namespace std;

//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值

int max(int a,int b) {
	
	if (a > b) {
		return a;
	}
	else {
		return b;
	}

}

//提前告知编译器函数的存在，可以利用函数的声明
//声明可以有多次，但是定义只能由一次
int min(int a, int b);
int main05() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	cout << min(a, b) << endl;
	system("pause");
	return 0;
}

int min(int a, int b) {

	return a < b ? a : b;

}