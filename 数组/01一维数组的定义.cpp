#include<iostream>

using namespace std;

int main01() {


	int arr[5] = {300,350,200,400,250};

	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << "×î´óÖµ£º"  << max << endl;
	system("pause");

	return 0;

}