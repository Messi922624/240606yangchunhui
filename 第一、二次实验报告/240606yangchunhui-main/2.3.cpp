#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "请输入三角形的第一条边：" << endl;
    cin >> side1;
    cout << "请输入三角形的第二条边：" << endl;
    cin >> side2;
    cout << "请输入三角形的第三条边：" << endl;
    cin >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        int c = side1 + side2 + side3;
        cout << "三角形的周长是：" << c << endl;

        if (side1==side2||side2==side3||side1==side3) {
            cout << "这是一个等腰三角形" << endl;
        }
        else {
            cout << "这不是一个等腰三角形" << endl;
        }
    }
    else {
        cout << "这三条边不能构成三角形" << endl;
    }

    return 0;
}