#include<iostream>

using namespace std;

int main04() {

	//switch���
	cout << "�����Ӱ���:"<< endl;

	int score = 0;
	cin >> score;

	switch (score)
	{
	case 9:
		cout << "�����Ӱ" << endl;
		break;
	case 8:
		cout << "�����Ӱ" << endl;
		break;
	case 7:
		cout << "�����Ӱ" << endl;
		break;
	case 6:
		cout << "�����Ӱ" << endl;
		break;
	case 5:
		cout << "һ���Ӱ" << endl;
		break;
	case 4:
		cout << "һ���Ӱ" << endl;
		break;
	default:
		cout << "������Ӱ" << endl;
		break;
	}

	system("pause");

	return 0;
}