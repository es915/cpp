#include <iostream>
#include "DataStore.h"

using namespace std;
	DataStore::DataStore() :
		i(0)
	{
		datas = new int[100];
	}

	// 소멸자의 역할 -> 객체 안에서 동적할당 된 메모리를 해제하기 위해 만듬
	DataStore::~DataStore() {
		delete datas; // 생성자 안에 선언된 동적할당을 소멸하면서 같이 지움
		cout << "객체가 사라집니다" << endl;
	}

	void DataStore::setData(int data) {
		datas[i++] = data;
	}

	int DataStore::getData(int index) {
		return datas[index];
	}