#include<iostream>

#include"swap.h";

using namespace std;

int main() {

	cout << "1.����.h��׺����ͷ�ļ�" << endl;
	cout << "2.����.cpp��׺����Դ�ļ�" << endl;
	cout << "3.��ͷ�ļ���д����������" << endl;
	cout << "4.��Դ�ļ���д�����Ķ���" << endl;

	int a = 10;
	int b = 20;
	swap2(a, b);
	system("pause");
	return 0;
}
