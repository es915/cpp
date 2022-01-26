#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Animal {
	int age;
public :

	Animal() :
		age(0)
	{
		cout << "동물이 생성됩니다." << endl;
	}

	void breathe() {
		cout << "숨쉬다" << endl;
	}

	virtual void cry() {
		cout << "울다" << endl;
	}
};

class Cat : public Animal {
	int no;
public :
	Cat() :
		no(1)
	{
		cout << "고양이가 생성됩니다." << endl;
	}

	void cry() {
		cout << no << "번 고양이가 야옹" << endl;
	}
};

class Dog : public Animal {
public:
	Dog() {
		cout << "개가 생성됩니다." << endl;
	}
	void cry() {
		cout << "멍멍" << endl;
	}
};


void test(int a) {
	cout << a << endl;
}



int main() {

	Cat c9; 
	c9.cry();

    Animal a9;
    a9.cry();

    cout << " " << endl;

    // 정적 바인딩 : 함수의 주소를 컴파일러가 자료형을 보고 미리 주소를 정함
    // 동적 바인딩 : 실행 도중 객체가 함수의 주소를 지정함
	// ============================================================================================

    Animal a10;
    Cat c10;
    Dog d10;

    // 동적할당을 통해 가상함수를 동적 바인딩을 해야함
    // 가상 테이블에 담긴 가상 함수를 cat의 cry로 재정의 시켜 cry함수를 실행했을땐 cat의 함수가 실행됨
    Animal* a11 = new Cat();
    a11->cry();

	return 0;
}
