#include<iostream>

using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

int max(int a,int b) {
	
	if (a > b) {
		return a;
	}
	else {
		return b;
	}

}

//��ǰ��֪�����������Ĵ��ڣ��������ú���������
//���������ж�Σ����Ƕ���ֻ����һ��
int min(int a, int b);
int main05() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	cout << min(a, b) << endl;
	system("pause");
	return 0;
}

int min(int a, int b) {

	return a < b ? a : b;

}