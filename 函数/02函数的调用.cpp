#include<iostream>

using namespace std;

//����ӷ�����
int add1(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main02() {

	//mian�����е���add����
	int sum = add1(1, 2);

	cout << sum << endl;

	system("pause");
	return 0;
}