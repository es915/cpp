#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	// 알아서 늘려주고 추가해줌
	vector<int> v1;

	// 1. 길이 정보
	cout << v1.size() << endl;

	// 2. 추가 -> push_back(배열에 들어갈 값) 함수 사용
	// 가장 최근에 저장된 값 뒤에 추가
	v1.push_back(10);

	cout << v1.size() << endl;

	v1.push_back(39);
	v1.push_back(52);
	v1.push_back(21);

	cout << v1.size() << endl;
	cout << " " << endl;

	// 3. 가져오기
	for(int i=0; i<v1.size(); i++) {
		cout << v1[i] << endl;
	}

	// 4. 수정
	v1[3] = 12;
	cout << v1[3] << endl;
	cout << " " << endl;

	// 5. 삭제 -> erase(이터레이터(포인터));
	v1.begin(); // 시작 이터레이터
	v1.end(); // 끝 이터레이터
	v1.erase(v1.begin());

	cout << v1[0] << endl;

	// 자료구조
	// c   -> 직접 만들어야함
	// c++ -> 제공
	// STL (standard Template Library)

	// 배열의 한계 -> 길이 고정, 추가 삭제 x
	// LinkedList, ArrayList 자료구조로 해결
	
	// c 배열 자료구조
	// int lengthSize = 5;
	// int* arr = new int[lengthSize];
	// for(int i=0; i<10; i++) {
	// 	if(i>=lengthSize) {
	// 		// 배열을 두배로 늘림
	// 		int* tmp = new int[lengthSize * 2];
	// 		// 늘려진 배열을 arr에 씌울경우 앞에 있는 데이터들이 사라지므로
	// 		// 두배를 늘린 배열을 다른 변수에 담아두고 그 변수에 배열안에 있는 값을 넣음
	// 		for(int j=0; j<lengthSize; j++) {
	// 			tmp[j]=arr[j];
	// 		}

	// 		delete[] arr;
	// 		arr = tmp;
	// 		lengthSize *= 2;
	// 	}
	// 	cin >> arr[i];
	// }

	// for(int i=0; i<lengthSize; i++) {
	// 	cout << arr[i] << endl;
	// }

    return 0;
}
