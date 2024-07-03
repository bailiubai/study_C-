#include<iostream>

using namespace std;


int main() {

	int a = 10;

	//Âß¼­ÔËËã·û ·Ç !
	cout << !a << endl;
	cout << !!a << endl;

	//Âß¼­ÔËËã·û Óë &&
	cout << (!a && a) << endl;
	cout << (!!a && a) << endl;

	//Âß¼­ÔËËã·û »ò ||
	cout << (!a || a) << endl;
	cout << (!!a || a) << endl;

	system("pause");
	
	return 0;

}