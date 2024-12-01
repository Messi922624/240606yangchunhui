#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char* s1, char* s2)
{
	int a = strlen(s1);
	int b = strlen(s2);
	for (int i = 0; i < b - a; i++)
	{
		int d = 0;
		for (int j = 0; j < a; j++)
		{
			if (s2[i + j] == s1[j])
			{
				d++;
			}
			else {
				break;
			}
			if (d == a) {
				return i;
			}
		}
		return -1;
	}
}
	int main()
	{
		char str[100], str1[200];
		cin >> str; cin >> str1;
		cout << indexOf(str, str1) << endl;
		return 0;
	}
