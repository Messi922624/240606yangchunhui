#include <iostream>
using namespace std;
// 冒泡排序函数
void bubbleSort(int* arr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;  // 用于存储用户输入的数组元素个数

    cout << "请输入数组元素个数: ";
    cin >> n;

    int* arr = new int[n];

    cout << "请输入数组元素: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }
    bubbleSort(arr, n);

    cout << "排序后的数组元素为: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}