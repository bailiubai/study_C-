#include<iostream>

using namespace std;

int ZiFuXingmain() {

	//1���ַ��ͱ����Ĵ�����ʽ
	char ch = 'a';
	cout << "a=" << ch << endl;
	//2���ַ��ͱ������ڴ��С
	cout <<"�ַ���������ռ�ڴ��С��" << sizeof(ch) << endl;
	//3���ַ��ͱ����ĳ�������
	//char ch2 = "2";
	//char ch3 = 'asdas';

	//4���ַ��ͱ������ڵ�ascii����
	cout << (int)ch << endl;
	//a=97�� A=65
	system("puase");

	return 0;
}