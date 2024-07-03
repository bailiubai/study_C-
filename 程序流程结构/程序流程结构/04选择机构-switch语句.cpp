#include<iostream>

using namespace std;

int main04() {

	//switch语句
	cout << "请给电影打分:"<< endl;

	int score = 0;
	cin >> score;

	switch (score)
	{
	case 9:
		cout << "经典电影" << endl;
		break;
	case 8:
		cout << "经典电影" << endl;
		break;
	case 7:
		cout << "优秀电影" << endl;
		break;
	case 6:
		cout << "优秀电影" << endl;
		break;
	case 5:
		cout << "一般电影" << endl;
		break;
	case 4:
		cout << "一般电影" << endl;
		break;
	default:
		cout << "垃圾电影" << endl;
		break;
	}

	system("pause");

	return 0;
}