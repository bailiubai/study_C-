#include<iostream>
using namespace std;

int main04() {

	int a = 10;
	int b = 20;

	//1、const修饰指针 常量指针：指针指向的指不可修改，指针的指向可以改（指针指向就是地址值）
	 int const * p = &a;
	//*p = 100; 错误指针指向的指不可以修改
	p = &b; //正确，指针指向的地址可以改

	//2、const修饰常量 指针常量：指针的指向不可以改，指针指向的指可以改
	int * const p2 = &a;
	*p2 = 100;//正确，指针指向的指可以改
	//p2 = &b; 错误，指针的指向不可以改
	//3、const修饰指针和常量

	int const * const p3 = &a;
	//p3 = &b;
	//*p3 = 100;
	//以上两行代码都错误，指针的指向与指针指向的指都不可以改

	cout << "p=" << p << endl;
	cout << "*p=" << *p << endl;
	cout << "p2=" << p2 << endl;
	cout << "*p2=" << *p2 << endl;
	cout << "p3=" << p3 << endl;
	cout << "*p3=" << *p3 << endl;
	system("pause");
	return 0;
}