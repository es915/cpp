#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Wing {
public :
	// 최상위 클래스 -> 가상 함수 -> 자손 클래스들이 오버라이딩할수 있도록 함
    virtual void use() {
        cout << "날다" << endl;
    }
};

class Foot {
public :
    virtual void use() {
        cout << "헤엄치다" << endl;
    }
};

class NormalWing : public Wing {
public:
	void use() {
		cout << "오리가 날개로 날아갑니다!!" << endl;
	}
};

class NormalFoot : public Foot {
public:
	void use() {
		cout << "오리가 오리발로 헤업칩니다!!" << endl;
	}
};

class RubberWing : public Wing {
public:
	void use() {
		cout << "고무날개는 날 수 없습니다." << endl;
	}
};

class RubberFoot : public Foot{
public:
	void use() {
		cout << "둥둥 떠다닙니다." << endl;
	}
};

class Duck {
public:
    Duck() {
		wing = new NormalWing();
		foot = new NormalFoot();
	}

	void fly() {
		wing->use();
	}

	void swim() {
		foot->use();
	}

protected:
	Wing* wing;
	Foot* foot;
};

class MallardDuck : public Duck {
    // MallardDuck() {
    //     wing = NormalWing();
    //     foot = NormalFoot();
    // }
};
class WhiteDuck : public Duck {};
class RubberDuck : public Duck {
public:
	RubberDuck() {
        wing = new RubberWing();
        foot = new RubberFoot();
    }
};
class RubberDuck2 : public RubberDuck {};
class AsuraDuck : public Duck {
public:
	AsuraDuck() {
		wing = new NormalWing();
		foot = new RubberFoot();
	}
};

int main() {
    
    MallardDuck d1 = MallardDuck();
	WhiteDuck d2 = WhiteDuck();
	RubberDuck d3 = RubberDuck();
	RubberDuck2 d4 = RubberDuck2();
	AsuraDuck d5 = AsuraDuck();

	Duck ducks[] = {d1, d2, d3, d4, d5};

	for(Duck d : ducks) {
		d.fly();
		d.swim();
	}

    return 0;
}
