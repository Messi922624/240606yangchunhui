#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, xn, xm;
	cout << "����������" << endl;
	cin >> a;
	if (a >= 0)
	{
		xn = a;
		xm = (a / xn + xn) / 2;
		double c = (xn - xm > 0 ? xn - xm : xm - xn);
		while (c >= 1e-5)
		{
			xn = xm;
			xm = (a / xn + xn) / 2;
			c = (xn - xm > 0 ? xn - xm : xm - xn);
			cout << "ƽ����Ϊ" << xm << endl;
		}

	if(a<0) {
			cout << "��ƽ����" << endl;
		}

	}
	return 0;
}