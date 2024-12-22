#include<iostream>
using namespace std;
class student {
public:
	int grade;
	int card;
	student(int g, int c)
	{
		grade = g;
		card = c;
	}
};
int Max(student* s)//找出成绩最高的那个人并返回card
{
	const int n = 5;
	int max = s[0].grade;
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (s[i].grade > max)
		{
			max = s[i].grade;
			index = i;
		}
	}
	return s[index].card;


}
int main()
{
	const int n = 5;
student s[n]= { {90,1001}, {85,1002}, {95,1003}, {80,1004}, {75,1005} };
int maxcard = Max(s);
cout << "The student with the highest grade has card number " << maxcard << endl;

	return 0;
}