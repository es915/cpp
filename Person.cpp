#include <iostream>
#include "Person.h"

using namespace std;
Person::Person() : Person(0, "")
{
	// Person:: 을 붙여 어떤 클래스의 함수인지 명시해야함
}

Person::Person(int age, string name) :
	age(age),
	name(name)
{
	cout << "사람 탄생" << endl;
}

// 소멸자 - 객체가 사라질때, 마무리하는 작업
Person::~Person() {
	cout << "사람이 사라집니다" << endl;
}

void Person::introduce() {
	cout << name << ", " << age << endl;
}