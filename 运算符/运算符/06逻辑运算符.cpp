#include<iostream>

using namespace std;


int main() {

	int a = 10;

	//�߼������ �� !
	cout << !a << endl;
	cout << !!a << endl;

	//�߼������ �� &&
	cout << (!a && a) << endl;
	cout << (!!a && a) << endl;

	//�߼������ �� ||
	cout << (!a || a) << endl;
	cout << (!!a || a) << endl;

	system("pause");
	
	return 0;

}