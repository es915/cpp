#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Animal {

};

class Person : public Animal{
public : 
	void introduce() {
		cout << "안녕" << endl;
	}
};

class Monkey : public Animal{
public : 
	void doFeat() {
		cout << "묘기" << endl;
	}
};

void test(const int* pk) {
	cout<<*pk<<endl;
	// const로 고정한 값을 잠시 풀어 주는 역할을 함
	// 변경 가능한 상태인 int로 바꿔줌
	int* ppk = const_cast<int*>(pk);
	*ppk=1000;
}

int main() {
	
	// c 형변환
	int a = 10;
	char b = (char)a; // a를 char로 바꾸어 b에 넣어라

	// 사람을 형변환하여 원숭이로 바꿈
	Monkey* m1 = (Monkey*)new Person();
	// 사람이 묘기를 부림
	m1->doFeat();

	Animal* a1 = new Person();

	// c++ 형변환
	// 1. 정적 변환 -> 컴파일이 돌때 체크
	// static_cast<type>(target);
	// 최대한 값을 유지 하려고 함 비트 구성을 바꿔 값을 유지할수도 있음
	// 변환이 이상한 경우 컴파일러가 에러를 일으킴
	float f = 3.0f;
	int i = static_cast<int>(f);
	// monkey와 person은 접점이 없기에 형변환 x = 이상한 변환으로 차단됨
	// Monkey* m2 = static_cast<Monkey*>(new Person());

	// 1. 재해석 변환
	// 비트 유지하고 자료형을 다르게 하여 변환
	// 변환이 이상해도 컴파일러가 넘어감
	Monkey* m3 = reinterpret_cast<Monkey*>(new Person);

	// const_cast : const를 잠시 삭제하여 값의 변경을 가능하게 함
	int k = 100;
	test(&k);
	cout << k << endl;

	// dynamic_cast
}
