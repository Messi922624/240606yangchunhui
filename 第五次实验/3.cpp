#include <iostream>
using namespace std;
class Box{
private:
    double length, width, height;
public:
    Box(double l, double w, double h){
        length = l;
        width = w;
        height = h;
    }
    double volume(){
        return length * width * height;
    }
};
int main()//��������������
{
    cout << "����������������ĳ������ߣ�" << endl;
    int a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    

    Box box1(a, b, c);
    Box box2(d, e, f);
    Box box3(g, h, i);

    cout << "��һ��������������" << box1.volume() << endl;
    cout << "�ڶ���������������" << box2.volume() << endl;  
    cout<<"������������������"<<box3.volume()<<endl;

    return 0;
}
