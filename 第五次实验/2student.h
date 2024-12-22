#pragma once
#include <iostream>
#include <cstring> // 包含cstring以使用strcpy
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	// 带参数的构造函数
	Student(int n, const char* s, char c) {
	num = n;
	strcpy_s(name, s);
	sex = c;
	}

	// 默认构造函数
	Student() : num(0), sex('M') { // 初始化默认值

	}
private:
	int num;
	char name[20];
	char sex;
	void set_value(int n, char* s, char c)
	{
		num = n;
		strcpy_s(name, s);
		sex = c;
	}

}; 
