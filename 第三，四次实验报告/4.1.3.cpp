#include<iostream>
using namespace std;
int main()
{
	bool guizis[100] = { false };
	for (int stu = 1; stu <= 100; stu++)
	{
		for (int guizi = stu; guizi <= 100; guizi += stu) {
			guizis[guizi - 1] = !(guizis[guizi - 1]);
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (guizis[i]) {
			cout << i + 1 << " " << endl;
		}

	}
	return 0;
}