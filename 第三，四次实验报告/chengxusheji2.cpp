#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int sum = 0;
	for (int i = 0; hexString[i] != '\0'; i++)
	{
		sum *= 16;
		if (hexString[i] >= 'A' && hexString[i] <= 'Z') {
			sum += hexString[i] - 'A' + 10;
		}
		if (hexString[i] >=0&& hexString[i] <=9) {
			sum += hexString[i] - '0';
		}
	}
	return sum;
}
int main()
{
	char string[100];
	cin.getline(string, 100);
	cout << parseHex(string) << endl;
	return 0;
}