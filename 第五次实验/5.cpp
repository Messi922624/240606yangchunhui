#include<iostream>
using namespace std;//Point类
class Point {
private:
	int x=60;
	int y = 80;
public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	
	}
	void setPoint(int i, int j)
	{
		x=60+i;
		y=80+j;
	}
	void display()
	{
		cout << "The point is (" << x << "," << y << ")" << endl;//坐标的经典写法
}



};
int main()
{
	Point p(60, 80);
	p.setPoint(10, 10);
	p.display();



	return 0;
}