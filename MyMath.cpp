#include <iostream>
#include "MyMath.h"

using namespace std;

MyMath::MyMath() : mX(10) {}

void MyMath::Divide(int num) const {
	// mX /= num; // 이 부분이 에러의 원인
	cout << num / mX << endl;
}

void MyMath::Minus(int num) const{
	// mX -= num; // 이 부분이 에러의 원인
	// const가 붙어 멤버 변수를 변경할수 없음 -> mX를 초기화 할수 없음
	cout << mX - num << endl;
}