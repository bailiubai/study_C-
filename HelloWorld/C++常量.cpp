#include<iostream>

using namespace std;

/*
	常量
	1、 #define宏常量
	2、 const修饰的变量
	vs 无法用define定义常量
*/

constexpr auto Day  = 7;

int ChangLiangmain() {

	cout << "一周总共有:" << Day <<"天" << endl;

	const int month = 12;

	cout << "这是第：" << month << "月" << endl;

	system("pause");

	return 0;

}