#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }

    while (i < size1) {
        list3[k++] = list1[i++];
    }

    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    const int Size = 80;
    int size1 = 0;
    cout << "�������һ���������м�����" << endl;
    cin >> size1;
    int list1[Size];
    cout << "��Ϊ��һ�����鸳ֵ" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }

    int size2 = 0;
    cout << "������ڶ����������м�����" << endl;
    cin >> size2;
    int list2[Size];
    cout << "��Ϊ�ڶ������鸳ֵ" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    int list3[Size + Size];

    merge(list1, size1, list2, size2, list3);

    cout << "����������Ϊ��" << endl;
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}