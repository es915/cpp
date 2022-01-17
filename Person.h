#pragma once
#include <iostream>

using namespace std;

class Person {
private:
	int age;
	string name;

public:
	Person();
	Person(int age, string name);
	~Person();
	void introduce();
};