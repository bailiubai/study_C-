#include<iostream>

using namespace std;

int main() {

	//goto
	cout << "0" << endl;
	cout << "1" << endl;
	goto FLAG;
	cout << "2" << endl;    
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;
	system("pause");

	return 0;
}