#include<iostream>
using namespace std;
int main()
{
	cout << "请输入华氏温度" << endl;
	double t;
	cin >> t;
	double C = (t - 32) * (5.00 / 9.00);
	cout << "摄氏温度为" << C << endl;




	return 0;
}