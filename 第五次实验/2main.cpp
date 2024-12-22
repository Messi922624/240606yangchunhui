#include <iostream>             
#include "student.h"

int main() {
    Student stud;                // 定义对象

    Student stud1(007, "tcg", 'm'); // 使用带参数的构造函数

    // 假设display()函数用于输出学生信息
    stud.display();              // 执行stud对象的display函数
    stud1.display();            // 也显示stud1对象的信息

    return 0;
}