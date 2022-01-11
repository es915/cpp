#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>


namespace name1 {
    int a = 10;
}

namespace name2 {
    int a = 30;
}



int main() {

    // c 출력문
    printf("Hello World\n");

    // cpp 출력문
    std::cout << "test" << std::endl; // endl -> 줄바꿈 포함
    // 서식지정자 불필요
    std::cout << 10 << std::endl;
    std::cout << 3.14000 << std::endl;
    // std == 네임스페이스

    int a = 20;
    std::cout << a << std::endl; // 20

    // 네임스페이스가 다르면 변수이름이 겹쳐도 상관 X
    std::cout << name1::a << std::endl; // 10
    std::cout << name2::a << std::endl; // 30

    using namespace std; // 네임스페이스를 기본값으로 설정
    cout << "Hello" << endl; // 위에 네임스페이를 보고 맞는게 없다면
                             // 기본값인 std:: 를 넣게 됨 

    using namespace name1; // name1 기본값 설정
    cout << a << endl; // 10
    // name2는 기본값 설정 X -> 네임스페이스 쳐줘야됨 
    cout << name2::a << endl; // 30

    // 문자열
    char str[] = "hello";
    char str2[] = "hello";

    // cout << (str == str2) << endl; // 주소 비교 , 0
    
    // namespace = std
    string cpstr = "hello";
    string cpstr2 = "hello";
    cout << (cpstr == cpstr2) << endl; // 값 비교 , 1

    // 참 거짓
    bool flag;

    flag = true;
    cout << flag << endl; // 1

    flag = false;
    cout << flag << endl; // 0

    // 입력
    int num;

    std::cin >> num;

    cout << "입력한 값 : " num << endl;


    return 0;
}
