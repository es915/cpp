#include <iostream>

using namespace std;

class Person {
private:
	int age;
	string name;

public:
	Person() : Person(0, "")
	{
		/*cout << "��� ź��" << endl;*/
		// �ڵ� �ߺ� -> �����ڸ� �����ھȿ� �����Ҽ� ����
		// �����ڰ� �����ε� ������ �����ڳ��� �����Ҽ� ����
	}

	Person(int age, string name) :
		age(age),
		name(name)
	{
		cout << "��� ź��" << endl;
	}

	// �Ҹ��� - ��ü�� �������, �������ϴ� �۾�
	~Person() {
		cout << "����� ������ϴ�" << endl;
	}

	void introduce() {
		cout << name << ", " << age << endl;
	}
};