#include<iostream>

using namespace std;

int main06() {

	//forѭ��
	//������
	for (int i = 0; i < 100; i++) {
		if (i % 7 == 0) {
			cout << i << "������" << endl;
			continue;
		}
		if (i % 10 == 7) {
			cout << i << "������" << endl;
			continue;
		}
		if (i / 10 == 7) {
			cout << i << "������" << endl;
			continue;
		}

	}


	system("pause");

	return 0;
}