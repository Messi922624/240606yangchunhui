#include <iostream>             
#include "student.h"

int main() {
    Student stud;                // �������

    Student stud1(007, "tcg", 'm'); // ʹ�ô������Ĺ��캯��

    // ����display()�����������ѧ����Ϣ
    stud.display();              // ִ��stud�����display����
    stud1.display();            // Ҳ��ʾstud1�������Ϣ

    return 0;
}