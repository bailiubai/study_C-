#include<iostream>

using namespace std;

//����ӷ�����
void swap(int num1, int num2) {
	cout << "����ǰ��num1:" << num1 << endl;
	cout << "����ǰ��num2:" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "�������num1:" << num1 << endl;
	cout << "�������num2:" << num2 << endl;
}

//ֵ����-�β���û���ı�ʵ�ε�
int main03() {

	//mian�����е���add����
	int a = 1;
	int b = 2;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}