#include<iostream>

using namespace std;

int main01() {

	//1.����һ��ָ��
	int a = 10;
	//ָ�붨����﷨����������*ָ�������
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;

	cout << "����a�ĵ�ַ:" << &a << endl;
	cout << "ָ��p:" << p << endl;
	//2.ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ��  * ��������ã��ҵ�ָ��ָ����ڴ��е�����

	*p = 100;
	cout << "����a:" << a << endl;   
	cout << "ָ��*p:" << *p << endl;
	system("pause");

	return 0;
}