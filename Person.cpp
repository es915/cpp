#include <iostream>
#include "Person.h"

using namespace std;
Person::Person() : Person(0, "")
{
	// Person:: �� �ٿ� � Ŭ������ �Լ����� ����ؾ���
}

Person::Person(int age, string name) :
	age(age),
	name(name)
{
	cout << "��� ź��" << endl;
}

// �Ҹ��� - ��ü�� �������, �������ϴ� �۾�
Person::~Person() {
	cout << "����� ������ϴ�" << endl;
}

void Person::introduce() {
	cout << name << ", " << age << endl;
}