#include "swap.h"

void swap2(int a, int b) {

	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}