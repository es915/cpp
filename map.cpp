#define _CRT_SECURE_NO_WARNINGS
#include <map>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	// vector - 사람 -> 나이, 이름, 고향
	vector<string> p1;
	p1.push_back("20");
	p1.push_back("홍길동");
	p1.push_back("대전");

	// cout << p1["홍길동"] << endl;

	// map
	// <key, value> - 아무 자료형이나 넣음
	map<string, string> m1;

	cout << m1.size() << endl;

	// 추가 - insert
	// map은 여러 pair을 저장
	pair<string, string> p2A("나이" , "20");
	pair<string, string> p2N("이름" , "홍길동");
	pair<string, string> p2H("고향" , "대전");
	cout << p2A.first << ", " << p2A.second << endl; 
	cout << p2N.first << ", " << p2N.second << endl; 
	cout << p2H.first << ", " << p2H.second << endl; 

	m1.insert(p2A);
	m1.insert(p2N);
	m1.insert(p2H);

	cout << " " << endl;

	// 조회 -> map[], at()
	cout << m1["나이"] << endl;
	cout << m1.at("이름") << endl;
	cout << m1["고향"] << endl;

	cout << " " << endl;

	// 수정
	m1["나이"] = "30";
	cout << m1["나이"] << endl;

	// 삭제 - erase
	m1.erase("고향");

	cout << m1["고향"] << endl; // 아무것도 출력이 안됨


	// 반복자(iterator) -> 컨테이너, 컬렉션

	// 선언
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	cout << " " << endl;

	for(int i=0; i<v1.size(); i++) {
		cout << v1[i] << endl;
	}

	vector<int>::iterator iter1 = v1.begin();
	vector<int>::iterator iter2 = v1.end();
	vector<int>::iterator iter3 = iter1;

	for(iter3=iter1; iter3!=iter2; iter3++) {
		cout << *iter3 << endl;
	}

	map<string, string>::iterator iter;

	for(iter=m1.begin(); iter!=m1.end(); iter++) {
		cout << iter->first <<endl; // key
		cout << iter->second <<endl; // key
		// 고향은 지웠으므로 출력 X
	}

}
