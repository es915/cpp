#include <iostream>

using namespace std;

class Person {
private:
	int age;
	string name;

public:
	Person() : Person(0, "")
	{
		/*cout << "사람 탄생" << endl;*/
		// 코드 중복 -> 생성자를 생성자안에 세팅할수 있음
		// 생성자가 오버로딩 됬을때 생성자끼리 위임할수 있음
	}

	Person(int age, string name) :
		age(age),
		name(name)
	{
		cout << "사람 탄생" << endl;
	}

	// 소멸자 - 객체가 사라질때, 마무리하는 작업
	~Person() {
		cout << "사람이 사라집니다" << endl;
	}

	void introduce() {
		cout << name << ", " << age << endl;
	}
};