#include <iostream>

using namespace std;

class Person {
public : 
    Person() : Person(0, "무명") { };
        
    Person(int age, const char* name) :mAge(age) {

        mName = new char[20];
        strcpy(mName, name);

        cout << "사람 초기화" << endl;
        cout << "나이 : " << mAge << endl;
        cout << "이름 : " << mName << endl;
    }

    ~Person() {
        delete mName;
        cout << "메모리 해제" << endl;
    };

    Person(const Person& p) {
        mAge = p.mAge;
        mName = new char[20];
        strcpy(mName, p.mName);
    }

    void operator=(const Person & p) {
        mAge = p.mAge;
        mName = new char[20];
        strcpy(mName, p.mName);
    }

    char* GetName() const {
        return mName;
    }
private :
    int mAge;
    char* mName;
};


int main() {
    Person p1(20, "홍길동");
    Person p2(22, "이순신");
    Person p3(24, "이성계");

    // 클래스 객체 -> 객체 연산
    // 대입 복사

    // 대입 연산자를 클래스 안에 함수로 명시하여
    // 얕은 복사하던 '=' 연산자를 깊은 복사를 하게 정의함
    p2 = p3;
    cout << p2.GetName() << endl;
    // 객체간의 연산을 함수로 따로 정의함 -> 연산자 오버로딩
    // operator=() : '=' 연산자를 함수화 

} 
