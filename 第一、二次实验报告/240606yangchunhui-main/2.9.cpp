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
	cout << "总价各为" << cost << endl;
	cout << "每天平均" << ave << endl;

	return 0;
}