#include <iostream>

using namespace std;

class Character {
private :
    string name;
    int attack;
    int defense;
public :
    Character(string name, int attack, int defense) :
        name(name),
        attack(attack),
        defense(defense)
    {}

    void move() const {
        cout << name << "이 이동" << endl;
    }

    void doAttack() {
        cout << name << "이 " << attack << "공격" << endl;
    }
    
    void doDefense() {
        cout << name << "이 " << defense << "방어" << endl;
    }

};

// 매지션에 캐릭터를 public 타입으로 상속 받음
class Magician : public Character {
public :
    // name, attack , defense는 캐릭터의 private기 떄문에 생성자 위임을 통해 받아옴
    Magician(string name, int attack, int defense) : 
        Character(name, attack, defense)
    {}

    void fire() {
        cout << "화염구를 날립니다" << endl;
    }
};

// 부모의 특징을 자식인 warrior 또한 사용이가능 함
class Warrior : public Character{
public :
    Warrior(string name, int attack, int defense) : 
        Character(name, attack, defense)
    {}

    void assault() {
        cout << "돌격합니다" << endl;
    }
};

int main() {

    Magician c1("홍길동", 20, 10);
    c1.doAttack();
    c1.fire();

    Warrior c2("이순신", 15, 15);
    c2.doDefense();
    c2.assault();


    return 0;
}
