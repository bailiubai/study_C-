#include<iostream>

using namespace std;

int main() {

	//while循环


	int score = 0;
	int rand_num = rand() % 100 + 1;
	while (score < rand_num) {
		cout << "请输入一个数:" << endl;
		cin >> score;
		if (score > rand_num) {
			cout << "rand_num:" << rand_num << endl;
			break;
		}
	}

	cout << "score:" << score << endl;

	system("pause");

	return 0;
}