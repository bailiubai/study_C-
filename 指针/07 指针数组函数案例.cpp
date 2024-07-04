#include<iostream>
using namespace std;

//冒泡排序函数 参数1数组的首地址，参数2数组的长度
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

	//1、创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//2、创建函数，实现冒泡排序
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	//3、打印排序后的数组
	printArray(arr, len);

	system("pause");
	return 0;
}