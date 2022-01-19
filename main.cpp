#include <iostream>

using namespace std;

class MyNumbers {
private :
    int x;
    int y;
public :
    MyNumbers() {

    }
    MyNumbers(int num1, int num2) :
        x(num1),
        y(num2)
    {
    }

    void PrintNumbers() {
        cout << x << ", " << y << endl;
    }
    
    // 값을 참조해야되기 때문에 상수화함
    // 연산자오버로딩은 왼쪽을 기준으로 진행함
    // a + b : a가 기준 this->x는 a의 x를 가르키게 됨 n은 b를 가르킴
    MyNumbers operator+(const MyNumbers& n) const {
        MyNumbers rst;
        rst.x = this->x + n.x;
        rst.y = this->y + n.y;
        return rst;
    }
    MyNumbers operator-(const MyNumbers& n) const{
        MyNumbers rst;
        rst.x = this->x - n.x;
        rst.y = this->y - n.y;
        return rst;
    }
    MyNumbers operator*(const MyNumbers& n) const{
        MyNumbers rst;
        rst.x = this->x * n.x;
        rst.y = this->y * n.y;
        return rst;
    }
    MyNumbers operator/(const MyNumbers& n) const{
        MyNumbers rst;
        rst.x = this->x / n.x; 
        rst.y = this->y / n.y;
        return rst;
    }
    void operator=(const MyNumbers& n) {
        this->x = n.x; 
        this->y = n.y;
    }

};

using namespace std;

int main() {

    MyNumbers m1(1, 2);
    MyNumbers m2(10, 20);

    m1.PrintNumbers(); // 출력 : 1, 2
    m2.PrintNumbers(); // 출력 : 10, 20

    MyNumbers m3;

    // m1을 기준으로 + 를 만났을때 그 뒤의 값인 m2와 연산자 오버로딩을 실행
    // m1의 x값과 y값을 각각 더한 값을 리턴하고 m3에 저장 
    m3 = m1 + m2;
    m3.PrintNumbers(); // 출력 : 1, 21

    m3 = m2 - m1;
    m3.PrintNumbers(); // 출력 : 9, 19

    m3 = m1 * m2;
    m3.PrintNumbers(); // 출력 : 10, 40

    m3 = m2 / m1;
    m3.PrintNumbers(); // 출력 : 10, 10

    m1 = m2;
    m1.PrintNumbers(); // 출력 : 10, 20
} 
