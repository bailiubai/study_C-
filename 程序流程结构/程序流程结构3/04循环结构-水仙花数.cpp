#include<iostream>

using namespace std;

int main04() {

	//һ��3λ��������ÿ��λ���ϵ����ֵ�3����֮�͵���������


	int score = 100;
	do {
		int a = score % 10;
		int b = score / 10 %10;
		int c = score /100;

		if (score == (a*a*a + b*b*b + c*c*c)) {
			cout << "ˮ�ɻ�����" << score << endl;
		}
		score++;
	} while (score < 1000);


	system("pause");

	return 0;
}