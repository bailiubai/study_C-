#include<iostream>

using namespace std;

int main02() {

	//ѡ��ṹ ����if���
	//�û���������������������600����Ϊ����һ����ѧ������Ļ���,���С��600�ִ���500�֣���Ϊ���϶�����ѧ������Ļ�����

	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;

	if (score > 600) {
		cout << "��ϲ����������һ����ѧ��" << endl;
	}
	else if(score > 500){
		cout << "��ϲ���������˶�����ѧ��" << endl;
	}
	else {
		cout << "���ź���" << endl;
	}
	system("pause");

	return 0;
}