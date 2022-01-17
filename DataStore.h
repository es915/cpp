#pragma once
#include <iostream>

using namespace std;

class DataStore {
private:
	// int datas[100];
	int* datas; // 동적할당을 위해 주소로 선언
	int i;
public:
	DataStore();
	~DataStore();
	void setData(int data);
	int getData(int index);
};