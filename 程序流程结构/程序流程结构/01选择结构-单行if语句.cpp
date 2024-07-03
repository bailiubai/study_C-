#include<iostream>

using namespace std;

int main01() {

	//选择结构 单行if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕输出

	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数为："<<score << endl;

	if (score > 600) {
		cout << "恭喜您，考中了一本大学！" << endl;
	}
	else {
		cout << "不要灰心！" << endl;
	}
	system("pause");

	return 0;
}