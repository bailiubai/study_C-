#include<iostream>

using namespace std;

int Sizemain() {

	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "short�����͵����ݴ�С��" << sizeof(num1) << endl;
	cout << "int���͵����ݴ�С��" << sizeof(num2) << endl;
	cout << "long�����͵����ݴ�С��" << sizeof(num3) << endl;
	cout << "long long �������͵����ݴ�С��" << sizeof(num4) << endl;
	system("pause");

	//���ʹ�С�Ƚ�
	//short < int <= long <= long long
	return 0;

}