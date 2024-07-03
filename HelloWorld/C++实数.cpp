#include<iostream>

using namespace std;

int FuDianXingmain() {

	//单精度float
	//双精度double
	//默认情况下 输出一个小数，会显示6位有效数字
	float f1 = 3.1415926f;
	double d1 = 3.1415926;

	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;
	
	cout << "float占内存空间为：" << sizeof(f1) << endl;
	cout << "double占内存空间为：" << sizeof(d1) << endl;

	//科学计数法
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}