#include<iostream>

using namespace std;

int main04() {

	//一个3位数，他的每个位数上的数字的3次幂之和等于它本身


	int score = 100;
	do {
		int a = score % 10;
		int b = score / 10 %10;
		int c = score /100;

		if (score == (a*a*a + b*b*b + c*c*c)) {
			cout << "水仙花数：" << score << endl;
		}
		score++;
	} while (score < 1000);


	system("pause");

	return 0;
}