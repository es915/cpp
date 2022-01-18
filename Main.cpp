#include <iostream>
#include "Main.h"
#include "Person.h"
#include "DataStore.h"

using namespace std;

class Test {
private : 
	int data;

public :
	Test() :
		data(10)
	{

	}

	// const ��� �Լ�
	void printData() const {
		cout << data << endl;
	}
	
	// const ��� �Լ� - ��� ������ �����Ҽ� ����
	void plusData(int addData) const {
		// data = data + addData; // ���� �Ұ�
		cout << data + addData << endl;
	}
};

int main() {

	Person p1{ 20, "ȫ�浿" };
	p1.introduce();

	Person p2;

	test();

	DataStore ds;

	DataStore* ds2 = new DataStore();

	ds.setData(1);
	ds.setData(2);
	ds.setData(3);

	ds2->setData(1);
	ds2->setData(2);
	ds2->setData(3);

	int rst = ds.getData(1);
	int rst2 = ds2->getData(2);

	cout << rst << endl;
	cout << rst2 << endl;

	delete ds2;

	return 0;
}

void test() {
	cout << "test" << endl;
}
