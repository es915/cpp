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

	// const 멤버 함수
	void printData() const {
		cout << data << endl;
	}
	
	// const 멤버 함수 - 멤버 변수를 변경할수 없다
	void plusData(int addData) const {
		// data = data + addData; // 변경 불가
		cout << data + addData << endl;
	}
};

int main() {

	Person p1{ 20, "홍길동" };
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
