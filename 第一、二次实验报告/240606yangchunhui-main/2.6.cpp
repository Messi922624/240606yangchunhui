#include<iostream>
using namespace std;
int gys(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b; b = temp;
	}return a;
	}
int gbs(int a, int b)
{
	return a * b / gys(a, b);


}
int main() {
	cout << "请输入两个整数" << endl;
	int a, b;
	cin >> a >> b;
	int c = gys(a, b);
	int d = gbs(a, b);
	cout << "最大公约数" << c << endl;
	cout << "最小公倍数" << d<<endl;
}