#include<iostream>

using namespace std;

int main02() {

	//指针所占用的内存空间大小
	//在32位操作系统指针占用4个字节
	//在64位操作系统指针占用8个字节
	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;
	cout << "sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;

	system("pause");

	return 0;
}