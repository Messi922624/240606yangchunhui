#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "������X" << endl;
    cin >> x;
    if (x > 0 & x < 1)
    {
        y = 3 - 2 * x;
    }
    else if (x >= 1 & x < 5)
    {

        y = 1 / (2 * x) + 1;
    }
    else if(x>=5&x<10)
    {
        y = x * x;
    }
    else
    {
        cout <<"x���ڷ�Χ��" << endl;

    }
    cout << "y=" <<y<< endl;
 
    return 0;
}
