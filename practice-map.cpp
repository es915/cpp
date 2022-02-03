#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Animal {

};

class Person : public Animal{
public : 
	void introduce() {
		cout << "안녕" << endl;
	}
};

class Monkey : public Animal{
public : 
	void doFeat() {
		cout << "묘기" << endl;
	}
};

int main() {
	// 1. ages 맵을 만들어주세요. ages의 insert 메서드는 인자로 pair<string, int>로 넣어주세요.
	map<string, int> ages;
    
    // 2. key로 학생의 이름을, value로 학생의 나이를 맵에 입력해주세요.
    // 영희 : 21
    // 철수 : 27 
    // 민서 : 25 
    // 광수 : 27
	pair<string, int> p1("영희", 21);
	ages.insert(p1);
	pair<string, int> p2("철수", 27);
	ages.insert(p2);
	pair<string, int> p3("민서", 25);
	ages.insert(p3);
	pair<string, int> p4("광수", 27);
	ages.insert(p4);
	
    // 3. 맵의 데이터를 아래와 같이 출력해주세요.
	// /* 출력결과 */

	for(pair<string, int> p : ages) {
		cout<< "이름 : " << p.first << "나이 : " << p.second << endl;
	}
	

	// // 이름 : 영희, 나이 : 21
	// // 이름 : 철수, 나이 : 27
	// // 이름 : 민서, 나이 : 25
	// // 이름 : 광수, 나이 : 27


    // 4. 맵에서 영희의 데이터를 지워주세요. 그리고 다시 모든 학생 정보를 출력해주세요.
    // /* 출력결과 */
	// // 이름 : 철수, 나이 : 27
	// // 이름 : 민서, 나이 : 25
	// // 이름 : 광수, 나이 : 27

	ages.erase("영희");
	cout << endl;
	for(pair<string, int> p : ages) {
		cout<< "이름 : " << p.first << "나이 : " << p.second << endl;
	}

    // 5. everyone 맵을 만들고 사람과 원숭이를 저장해주세요. kye는 객체의 이름, value는 실제 객체입니다.
    // 사람 : new 사람(),
    // 원숭이 : new 원숭이()
	// void 주소를 받아옴으로써 모든 타입의 주소를 받아올수 있음
	map<string, void*> everyone;
	pair<string, Person*> p5("사람", new Person());
	pair<string, Monkey*> p6("원숭이", new Monkey());
    
	everyone.insert(p5);
	everyone.insert(p6);

    // 6. everyone 맵에서 사람을 가져와 아래와 같이 출력해주세요. 
	// 출력 => 사람이 말합니다.
	// everyone에 들어간 "사람" 키를 가지고 있는 p5를 빼오기 위해 형변환 필요
	// 형변환 동적할당을 이용해야함 객체끼리 바꾸지 못하기때문에 주소값을 바꿈
	Person* p7 = (Person*)everyone["사람"];
	p7->introduce();

    // 7. everyone 맵에서 원숭이를 가져와 아래와 같이 출력해주세요.
	// 출력 => 원숭이가 묘기를 부립니다.
	Monkey* p8 = (Monkey*)everyone["원숭이"];
	p8->doFeat();

	// 8. everyone에 숫자까지 더함
	// void* 포인터로 모든 자료형을 포함할수 있음.
	pair<string, int*> p9("num1", new int(10));
	pair<string, float*> p10("num2", new float(10.5));

	everyone.insert(p9);
	everyone.insert(p10);

	// void 주소일 경우 자료형이 명확하지않아 자료형을 명시해줘야함
	// (int*) <-- 이거 명시해줘야함
	int* num1 = (int*)everyone["num1"];
	float* num2 = (float*)everyone["num2"];

	// 주소기 때문에 참조 연산자를 써야 값을 뽑아올수 있음
	cout << *num1 << endl;
	cout << *num2 << endl;
}
