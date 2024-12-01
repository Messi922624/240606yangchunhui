#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <2) {
		return false;
	}
	for (int i = 2; i*i<= num; i++)
	{
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int num = 2;
	int count = 0;
	while(count<200) {
		if (is_prime(num)) {
			cout << num << " " << endl;
			count++;
			if (count % 10 == 0) {
				cout << '\n' << endl;
					
		}
		}
		num++;
		}
	}
	return 0;
}