#include<iostream>
using namespace std;
int main()
{
	const float a = 0.8;
	int b = 2, i = 0, I;
	for (I = 0; b < 100; I++)
	{

		i = I + 2;
		b = b * 2;




	}
	float cost = i * a, ave = cost / I;
	cout << "�ܼ۸�Ϊ" << cost << endl;
	cout << "ÿ��ƽ��" << ave << endl;

	return 0;
}