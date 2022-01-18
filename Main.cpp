#include <iostream>
#include "MyMath.h"

// 아래는 MyMath 클래스를 이용해 빼기와 나누기 값을 출력해주는 함수입니다.
// 멤버변수의 잘못된 변경으로 에러가 나고 있습니다. 멤버변수를 바꾸지 않고 출력만 할 수 있도록 강제해주세요.

int main() {

	MyMath math;

	math.Minus(10);
	math.Divide(100);
}