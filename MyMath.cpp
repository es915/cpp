#include <iostream>
#include "MyMath.h"

using namespace std;

MyMath::MyMath() : mX(10) {}

void MyMath::Divide(int num) const {
	// mX /= num; // �� �κ��� ������ ����
	cout << num / mX << endl;
}

void MyMath::Minus(int num) const{
	// mX -= num; // �� �κ��� ������ ����
	// const�� �پ� ��� ������ �����Ҽ� ���� -> mX�� �ʱ�ȭ �Ҽ� ����
	cout << mX - num << endl;
}