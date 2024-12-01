#include<iostream>
using namespace std;
int gys(int a, int b)
{
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
		return a;
	}
}
//求最大公约数和最小公倍数的函数，使用引用
void gysandgbs(int a, int b, int& gys1, int& gbs1)
{
	gys1 = (a, b);
	gbs1 = a * b / gys1;
}
int main()
{
	int a, b;
	cout << "请输入两个需要求最小公倍数数字" << endl;
	cin >> a >> b;
	cout << gys(a, b) << endl;
	cout << "请输入两个需要求最大公约数数字" << endl;
	int gys1; int gbs1;
	gysandgbs(a, b, gys1, gbs1);
	cin >> a >> b;
	cout << gbs1(a, b) << endl;

	return 0;
}