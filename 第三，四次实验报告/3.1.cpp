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
//�����Լ������С�������ĺ�����ʹ������
void gysandgbs(int a, int b, int& gys1, int& gbs1)
{
	gys1 = (a, b);
	gbs1 = a * b / gys1;
}
int main()
{
	int a, b;
	cout << "������������Ҫ����С����������" << endl;
	cin >> a >> b;
	cout << gys(a, b) << endl;
	cout << "������������Ҫ�����Լ������" << endl;
	int gys1; int gbs1;
	gysandgbs(a, b, gys1, gbs1);
	cin >> a >> b;
	cout << gbs1(a, b) << endl;

	return 0;
}