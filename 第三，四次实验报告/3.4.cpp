#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "请输入三条边长" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1,side2,side3)) {
		double mianji = area(side1, side2, side3);
		cout << "三角形的面积为" << mianji << endl;
	}
	else {
		cout << "输入的三边构不成三角形，请重新输入" << endl;
	}
	return 0;
}