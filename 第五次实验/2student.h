#pragma once
#include <iostream>
#include <cstring> // ����cstring��ʹ��strcpy
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	// �������Ĺ��캯��
	Student(int n, const char* s, char c) {
	num = n;
	strcpy_s(name, s);
	sex = c;
	}

	// Ĭ�Ϲ��캯��
	Student() : num(0), sex('M') { // ��ʼ��Ĭ��ֵ

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
