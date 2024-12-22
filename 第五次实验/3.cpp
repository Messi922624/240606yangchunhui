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
int main()//三个长方体的体积
{
    cout << "请输入三个长方体的长、宽、高：" << endl;
    int a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    

    Box box1(a, b, c);
    Box box2(d, e, f);
    Box box3(g, h, i);

    cout << "第一个长方体的体积：" << box1.volume() << endl;
    cout << "第二个长方体的体积：" << box2.volume() << endl;  
    cout<<"第三个长方体的体积："<<box3.volume()<<endl;

    return 0;
}
