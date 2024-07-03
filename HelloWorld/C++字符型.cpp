#include<iostream>

using namespace std;

int ZiFuXingmain() {

	//1、字符型变量的创建方式
	char ch = 'a';
	cout << "a=" << ch << endl;
	//2、字符型变量的内存大小
	cout <<"字符型数据所占内存大小：" << sizeof(ch) << endl;
	//3、字符型变量的常见错误
	//char ch2 = "2";
	//char ch3 = 'asdas';

	//4、字符型变量对于的ascii编码
	cout << (int)ch << endl;
	//a=97、 A=65
	system("puase");

	return 0;
}