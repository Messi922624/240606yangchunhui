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
	cout << "��������������" << endl;
	int a, b;
	cin >> a >> b;
	int c = gys(a, b);
	int d = gbs(a, b);
	cout << "���Լ��" << c << endl;
	cout << "��С������" << d<<endl;
}