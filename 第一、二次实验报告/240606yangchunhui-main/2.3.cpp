#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "�����������εĵ�һ���ߣ�" << endl;
    cin >> side1;
    cout << "�����������εĵڶ����ߣ�" << endl;
    cin >> side2;
    cout << "�����������εĵ������ߣ�" << endl;
    cin >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        int c = side1 + side2 + side3;
        cout << "�����ε��ܳ��ǣ�" << c << endl;

        if (side1==side2||side2==side3||side1==side3) {
            cout << "����һ������������" << endl;
        }
        else {
            cout << "�ⲻ��һ������������" << endl;
        }
    }
    else {
        cout << "�������߲��ܹ���������" << endl;
    }

    return 0;
}