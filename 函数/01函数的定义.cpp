#include<iostream>

using namespace std;

//�����Ķ���
//�﷨��
//����ֵ����	������(�����б�){���������	return���ʽ}

//�ӷ�����
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main01() {

	int sum = add(1, 2);

	cout << sum << endl;

	system("pause");
	return 0;
}