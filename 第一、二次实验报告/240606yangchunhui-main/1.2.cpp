#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	double r, h;
	cout << "请输入圆锥底面半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	cout << "圆锥的体积为" << PI * r * r * (1.00 / 3.00) << endl;



	return 0;
}