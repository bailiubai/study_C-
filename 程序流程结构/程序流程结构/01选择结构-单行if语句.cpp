#include<iostream>

using namespace std;

int main01() {

	//ѡ��ṹ ����if���
	//�û���������������������600����Ϊ����һ����ѧ������Ļ���

	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��"<<score << endl;

	if (score > 600) {
		cout << "��ϲ����������һ����ѧ��" << endl;
	}
	else {
		cout << "��Ҫ���ģ�" << endl;
	}
	system("pause");

	return 0;
}