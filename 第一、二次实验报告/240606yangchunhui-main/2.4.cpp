#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "����������������������" << endl;
	cin >> a >> b;
	cout << "��ѡ��������е�����" << endl;
	cout << "1-�ӷ� 2-���� 3-�˷� 4-���� 5-ȡģ" << endl;
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
			cout << "����" << endl;
		}

		
		cout << "=" << a / b << endl;
	}
	else
	{
		cout << "=" << a % b << endl;
	}
	return 0;
}