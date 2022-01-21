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

class Duck {
public:
    void fly() {
        cout << "오리가 날개로 날아갑니다." << endl;
    }
    void swim() {
        cout << " 수영합니다" << endl;
    }
};

class MallardDuck : public Duck {

};

class WhiteDuck : public Duck {

};

class RubberDuck : public Duck {
public :
    void fly() { // 오버라이딩 메서드 : 조상의 함수를 자손이 다른 내용의 함수로 덮을수 있음
        cout << " 저는 날 수 없어요. ㅜㅠ" << endl;
    }
    void swim() {
        cout << " 둥둥 떠다닙니다" << endl;
    }
};

class RubberDuck2  : public RubberDuck {
    // RubberDuck의 fly 함수 하나, Duck의 fly 함수 하나 , 총 두개
    // 자신과 가까운 조상의 fly를 쓰개됨, 아빠격인 RubberDuck의 fly를 씀
public :
    void swim() { // 오버라이딩 메서드 : 조상의 함수를 자손이 다른 내용의 함수로 덮을수 있음
        cout << " 둥둥 떠다닙니다" << endl;
    }
};

class AsuraDuck : public Duck, public RubberDuck { // 다중 상속
    // Duck 의 swim, fly 와 RubberDuck의 swim, fly 중 뭘 써야될지 모르게됨
    // => 다중상속은 안쓰는게 좋다
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
    d5.Duck::fly();
    d5.RubberDuck::fly();
    d5.Duck::swim();
    d5.RubberDuck::swim();
    // 쓸수 있는 중복 함수들이 많음
}
