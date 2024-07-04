#include<iostream>
using namespace std;

//ð�������� ����1������׵�ַ������2����ĳ���
void bubbleSort(int *p,int len) {
	cout << p << endl;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

void bubbleSort2(int arr[10], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int * p,int len) {
	for (int i = 0; i < len; i++) {
		cout << p[i] << endl;
	}
}
int main() {

	//1����������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//2������������ʵ��ð������
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	//3����ӡ����������
	printArray(arr, len);

	system("pause");
	return 0;
}