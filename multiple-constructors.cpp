#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test
{
private :
    int* datas;
public :

    Test() :
        datas(new int[10])
    {
        for(int i=0; i<10; i++) {
            datas[i] = i+1;
        }
    }

    Test(const Test& other) {
        cout << "복사 생성자 호출" << endl;

        int* tmp = new int[10];

        for(int i=0; i<10; i++) {
            tmp[i] = other.datas[i];
        }
        
        datas = tmp;
    }

    // 이동 생성자
    // Test& -> lvalue 참조 : 왼쪽 값이 다른 값을 참조
    // Test&& -> rvalue 참조 : 오른쪽 값이 다른 값을 참조
    // a = 10; LeftValue = a, RightValue = 10;
    Test(Test&& other) {
        cout << "이동 생성자" << endl;
        // other의 데이터를 datas로 이동
        this->datas = other.datas; // 얕은 복사
        // 주소 복수 후 other이 할당하는 주소를 끊어버림
        other.datas = nullptr;
    }

	~Test()
	{
		cout << "Test 객체가 소멸됩니다." << endl;
	}

    void setData(int index, int data) {
        datas[index] = data;
    }

	void print()
	{
		for(int i=0; i<10; i++) {
            cout << datas[i] << " ";
        }
        cout << endl;
	}
};

int getInt() {
    return 10;
}
int main() {

    

    Test t1;
    Test t2 = t1; // 얕은 복사

    t2.setData(3, 100);

    t1.print();


    return 0;
}
