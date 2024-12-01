#include<iostream>
using namespace std;
int chitao(int a) {
	if (a == 10) {
		return 1;
	}
	return(chitao(a + 1) + 1) * 2;
}
int main()
{
	cout << "第一天猴子摘桃个数为" << chitao(1)<<endl;
	return 0;
}