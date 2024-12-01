#include<iostream>
#include<string>
using namespace std;
int indexOf(const char& s1, const char& s2)
{
	int len1 = s1.length();
	int len2 = s2.length();
	for (int i = 0; i <= len2 - len1; i++) {
		int j;
		for (j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j]) {
				break;
			}
		}
	if (j == len1)
	{
		return i;
	}
}
return -1;
}
int main()
{
	string s1; string s2;
	cout << "Enter the first string:" << endl;
	cin >> s1;
	cout << "Enter the second string:" << endl;
	cin >> s2;
	int result = indexOf(s1, s2);
	if(result!=-1){
		cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << result << endl;
	else {
		cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << result << endl;
	}
	return 0;
}