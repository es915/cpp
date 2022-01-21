#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
/* 요구사항
- D1 요구 : 오리를 생성하고 날게하시오.
- D1 완료 : 클래스와 메서드를 만들어서 처리
- D2 요구 : 게임의 디테일을 살리기 위해서 `청둥오리`와 `흰오리`를 생성하고 날게하시오.
- D2 완료 : 클래스와 메서드를 만들어서 처리
- D3 요구 : 오리 계열의 클래스에 날다 메서드가 중복되었습니다. 중복을 제거해주세요.
*/

#include <iostream>

using namespace std;

class NormalWing {
public :
    void use() {
        cout << "오리가 날개로 날아갑니다" << endl;
    }
};

class RubberWing {
public :
    void use() {
        cout << "날수 없어요" << endl;
    }
};

class NormalFoot {
public :
    void use() {
        cout << "헤엄칩니다" << endl;
    }
};

class RubberFoot {
public :
    void use() {
        cout << "둥둥 떠다닙니다" << endl;
    }
};


class Duck {
private :
    NormalWing wing;
    NormalFoot foot;
public:
    void fly() {
        wing.use();
    }
    void swim() {
        foot.use();
    }
};

class MallardDuck : public Duck {

};

class WhiteDuck : public Duck {

};

class RubberDuck : public Duck {
private :
    RubberWing wing;
    RubberFoot foot;
public :
    void fly() { // 오버라이딩 메서드 : 조상의 함수를 자손이 다른 내용의 함수로 덮을수 있음
        wing.use();
    }
    void swim() {
        foot.use();
    }
};

class RubberDuck2  : public RubberDuck {
private :
    RubberWing wing;
    RubberFoot foot;
    // RubberDuck의 fly 함수 하나, Duck의 fly 함수 하나 , 총 두개
    // 자신과 가까운 조상의 fly를 쓰개됨, 아빠격인 RubberDuck의 fly를 씀
public :
    void swim() { // 오버라이딩 메서드 : 조상의 함수를 자손이 다른 내용의 함수로 덮을수 있음
        foot.use();
    }
};

class AsuraDuck : public Duck {
private : 
    NormalFoot foot;
    NormalWing wing;
public :
    void fly() {
        wing.use();
    }
    void swim() {
        foot.use();
    }
};

int main() {
    MallardDuck d1 = MallardDuck();
    d1.fly();
    d1.swim();
    // 출력 : 오리가 날개로 날아갑니다.
    
    WhiteDuck d2 = WhiteDuck();
    d2.fly();
    d2.swim();
    // 출력 : 오리가 날개로 날아갑니다.

    RubberDuck d3 = RubberDuck();
    d3.Duck::fly(); // 조상의 fly함수
    d3.fly(); // 자신의 fly함수
    d3.swim();
    // 출력 : 저는 날 수 없어요. ㅜㅠ

    RubberDuck2 d4 = RubberDuck2();
    d4.fly(); // 가까운 조상의 함수
    d4.Duck::fly(); // 가까운 조상의 조상의 함수
    d4.swim();
    // 출력 : 저는 날 수 없어요. ㅜㅠ

    AsuraDuck d5 = AsuraDuck();
    d5.fly();
    d5.swim();
}
