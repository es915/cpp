#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Animal {
private :
    int age;
public :
    Animal() :
        age(0)
    {
        cout << "동물 생성" << endl;
    }

    void breathe() {
        cout << "숨쉬다" << endl;
    }

    virtual void cry() { // 가상 함수
        cout << "울다" << endl;
    }
};

class Cat : public Animal{
private :
    int no;
public :
    Cat() :
        no(1)
    {
        cout << "고양이 생성" << endl;
    }
    void cry() {
        cout << "야옹" << endl;
    }
};

class Dog : public Animal{
public :
    Dog() {
        cout << "개 생성" << endl;
    }

    void cry() {
        cout << "멍멍" << endl;
    }
};

int main() {
    // Cat c1;
    // Dog d1;
    
    // Animal animals[2]={c1, d1};

    // for(int i=0; i<2; i++) {
    //     animals[i].cry();
    // }

    // Cat c1; // 정적할당 -> 컴파일 시점에서 할당
    // c1.cry(); // 자기 자신 안에 있는 함수를 출력

    // Animal a1; // 정적할당
    // a1.cry(); // animal의 cry를 가져옴
    
    Cat c5;
    Animal a5;
    // 정적 할당
    a5 = c5; // 상속받은 것들만 a5에 복사됨, cat의 cry함수 같은경우 cat에서 만들었기에 복사 X
    a5.cry();

    // 동적 할당
    Cat* c6 = new Cat();
    Animal* a6 = c6; // 주소를 복사해와 a6도 c6의 함수를 사용할수 있음

    Dog* d6 = new Dog();
    Animal* a7 = d6;

    a6->cry(); // 주소값이기 때문에 -> 를 사용
    a7->cry();

    return 0;
}
