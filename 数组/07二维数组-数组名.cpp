#include<iostream>

using namespace std;

int main07() {

	//��ά�������Ƶ���;

	
	//1. ���Բ鿴ռ�ÿռ��С
	int arr2[2][3] = {
		{0,1,2},
		{3,4,5}
	};
	cout <<"��ά����ռ���ڴ�ռ�Ϊ��"<<sizeof(arr2) << endl;
	//2. ���Բ鿴��ά������׵�ַ
	cout << "�׵�ַ:" << (int)arr2 << endl;
	cout << "��һ��Ԫ���׵�ַ:" << (int)&arr2[0][0] << endl;

	system("pause");


	return 0;

}