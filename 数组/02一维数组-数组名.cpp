#include<iostream>

using namespace std;

int main02() {
	//����������;
	//1.����ͨ��������ͳ����������ռ���ڴ�Ĵ�С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ䣺" << sizeof(arr[0]) << endl;
	cout << "����ĳ���:" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2.����ͨ���������鿴�����׵�ַ
	cout << "�����׵�ַ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int) & arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;
	//��������һ������ �������Խ��и�ֵ����
	//arr = 100;
	system("pause");

	return 0;

}