#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Weapon {
public :
    virtual void attack() {
        cout << "무기로 공격합니다" << endl;
    }
};

class Bow : public Weapon {
public :
    void attack() {
        cout << "활로 공격합니다" << endl;
    }
};

class Sword : public Weapon {
public :
    Sword() {
        cout << "검 생성" << endl;
    }

    void attack() {
        cout << "검로 공격합니다" << endl;
    }
};

class Warrior {
public :
    Warrior() {
        cout << "전사 생성" << endl;
    }

    Weapon* weapon; // 주소를 받아야함
    string name;
    int age;
    
    void introduce() {
        cout << name << ", " << age << endl;
    }

    void attack() {
        weapon->attack();
    }
};

int main() {
    Warrior* warrior1 = new Warrior();

    warrior1->name = "홍길동";
    warrior1->age = 27;
    warrior1->introduce();
    // 출력 : 안녕하세요 저는 27살 홍길동입니다.
    
    
    warrior1->weapon = new Bow();
    warrior1->attack();
    // 출력 : 홍길동(이)가 활(으)로 공격합니다.
    
    warrior1->weapon = new Sword();
    warrior1->attack();
    // 출력 : 홍길동(이)가 칼(으)로 공격합니다.
    
    Warrior* warrior2 = new Warrior();
    warrior2->name = "홍길순";
    warrior2->age = 22;
    warrior2->introduce();

    // 출력 : 안녕하세요 저는 22살 홍길순입니다.
    warrior2->weapon = new Sword();
    warrior2->attack();
    // 출력 : 홍길순(이)가 칼(으)로 공격합니다.
    delete warrior2;
    delete warrior1;
}
