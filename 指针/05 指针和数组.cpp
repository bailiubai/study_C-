#include<iostream>
using namespace std;

int main05() {

	//ָ�������
	//����ָ����������е�����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;

	int* p = arr;//arr���������׵�ַ
	cout << "����ָ����������һ��Ԫ��:" << *p <<"��һ��Ԫ�صĵ�ַָ��"<<p << endl;

	p++;//��ָ��ָ��ĵ�ֵַ���ƫ��4���ֽ�
	cout << "����ָ���������ĵڶ���Ԫ�أ�" << *p << "�ڶ���Ԫ�صĵ�ַָ��" << p << endl;

	cout << "����ָ���������" << endl;
	int* p2 = &arr[1];
	for (int i = 0; i < 10; i++) {
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}