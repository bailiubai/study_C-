#include<iostream>

using namespace std;

int FuDianXingmain() {

	//������float
	//˫����double
	//Ĭ������� ���һ��С��������ʾ6λ��Ч����
	float f1 = 3.1415926f;
	double d1 = 3.1415926;

	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;
	
	cout << "floatռ�ڴ�ռ�Ϊ��" << sizeof(f1) << endl;
	cout << "doubleռ�ڴ�ռ�Ϊ��" << sizeof(d1) << endl;

	//��ѧ������
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}