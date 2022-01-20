#include <iostream>

using namespace std;

// class Character {
// private :
//     string name;
//     int attack;
//     int defense;
//     int movePoint;
// public :
//     Character(string name, int attack, int defense, int movePoint) :
//         name(name),
//         attack(attack),
//         defense(defense),
//         movePoint(movePoint)
//     {}

//     void move() const {
//         cout << name << "이 이동" << endl;
//     }

//     void doAttack() {
//         cout << name << "이 " << attack << "공격" << endl;
//     }
    
//     void doDefense() {
//         cout << name << "이 " << defense << "방어" << endl;
//     }

// };

class AttackBehavior1{
public :
    void doAttack(string name, int attack) const {
        cout << name << "이 화염구를 날려 " << attack << "데미지를 입힙니다" << endl;
    }
};

class AttackBehavior2{
public :
    void doAttack(string name, int attack) const {
        cout << name << "이 돌진하여 " << attack << "데미지를 입힙니다" << endl;
    }
};

// 매지션에 캐릭터를 public 타입으로 상속 받음
class Magician{
private :
    string name;
    int attack;
    AttackBehavior1 attackBehavior;
    // int defense;
    // int movePoint;
public :
    // name, attack , defense는 캐릭터의 private기 떄문에 생성자 위임을 통해 받아옴
    Magician(string name, int attack) : 
        name(name),
        attack(attack)
    {}

    void doAttack() {
        attackBehavior.doAttack(name, attack);
    }
    

    void fire() {
        cout << "화염구를 날립니다" << endl;
    }
};

// 부모의 특징을 자식인 warrior 또한 사용이가능 함
class Warrior{
private :
    string name;
    int attack;
    AttackBehavior2 attackBehavior;
public :
    Warrior(string name, int attack) : 
        name(name),
        attack(attack)
    {}

    void doAttack() {
        attackBehavior.doAttack(name, attack);
    }

    void assault() {
        cout << "돌격합니다" << endl;
    }
};

class Orc {
private :
    string name;
    int attack;
    AttackBehavior2 attackBehavior;
public :
    Orc(string name, int attack) : 
        name(name),
        attack(attack)
    {}

    void doAttack() {
        attackBehavior.doAttack(name, attack);
    }
};

int main() {

    Magician c1("홍길동", 20);
    c1.doAttack();
    // c1.fire();

    Warrior c2("이순신", 15);
    c2.doAttack();
    // c2.assault();

    Orc o1("오크", 20);
    o1.doAttack();


    return 0;
}
