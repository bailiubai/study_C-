#include<iostream>
using namespace std;

int main04() {

	int a = 10;
	int b = 20;

	//1��const����ָ�� ����ָ�룺ָ��ָ���ָ�����޸ģ�ָ���ָ����Ըģ�ָ��ָ����ǵ�ֵַ��
	 int const * p = &a;
	//*p = 100; ����ָ��ָ���ָ�������޸�
	p = &b; //��ȷ��ָ��ָ��ĵ�ַ���Ը�

	//2��const���γ��� ָ�볣����ָ���ָ�򲻿��Ըģ�ָ��ָ���ָ���Ը�
	int * const p2 = &a;
	*p2 = 100;//��ȷ��ָ��ָ���ָ���Ը�
	//p2 = &b; ����ָ���ָ�򲻿��Ը�
	//3��const����ָ��ͳ���

	int const * const p3 = &a;
	//p3 = &b;
	//*p3 = 100;
	//�������д��붼����ָ���ָ����ָ��ָ���ָ�������Ը�

	cout << "p=" << p << endl;
	cout << "*p=" << *p << endl;
	cout << "p2=" << p2 << endl;
	cout << "*p2=" << *p2 << endl;
	cout << "p3=" << p3 << endl;
	cout << "*p3=" << *p3 << endl;
	system("pause");
	return 0;
}