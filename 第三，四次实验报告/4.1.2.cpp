#include<iostream>
using namespace std;
void swap(double &a, double &b) {
	double temp = a;
	a = b;
	b = temp;
}
void qipao(double list[], int listSize)
{
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				swap(list[j],list[j + 1]);
				changed = true;
				
			}
		}
	} while (changed);

}
int main() {
	double arr[10];
	cout << "请输入十个双精度数字： " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	qipao(arr, 10);
	cout << "排序后的数字为" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " " << endl;
		return 0;
	}
}