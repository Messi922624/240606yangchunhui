#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入您想计算的两个数字" << endl;
	cin >> a >> b;
	cout << "请选择您想进行的运算" << endl;
	cout << "1-加法 2-减法 3-乘法 4-除法 5-取模" << endl;
	int c;
	cin >> c;
	if (c = 1)
	{
		cout << "=" << a + b << endl;
		
	}
	else if(c = 2)
	{
		cout << "=" << a - b << endl;
	}
	else if (c = 3)
	{
		cout << "=" << a * b << endl;
	}
	else if (c = 4)
	{
		if (b = 0) {
			cout << "错误" << endl;
		}

		
		cout << "=" << a / b << endl;
	}
	else
	{
		cout << "=" << a % b << endl;
	}
	return 0;
}