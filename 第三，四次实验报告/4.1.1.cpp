#include<iostream>
using namespace std;
int main()
{
	int butong = 0;
	int shuzi[10];
	cout << "Enter ten numbers" << endl;
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		bool newnumber = ture;
		for (int j = 0; j < butong; j++)
		{
			if (shuzi[j] == num) {
				newnumber = false;
				break;
			}

		}
	}
	if (newnumber) {
		shuzi[butong++] = num;
	}
}
cout << "The distinct nubers are: " << endl;
for (int i = 0; i < butong; i++)
{
	cout << shuzi[i] << " " < endl;
}
	return 0;
}