#include<iostream>

using namespace std;

int main06() {

	//for循环
	//敲桌子
	for (int i = 0; i < 100; i++) {
		if (i % 7 == 0) {
			cout << i << "敲桌子" << endl;
			continue;
		}
		if (i % 10 == 7) {
			cout << i << "敲桌子" << endl;
			continue;
		}
		if (i / 10 == 7) {
			cout << i << "敲桌子" << endl;
			continue;
		}

	}


	system("pause");

	return 0;
}