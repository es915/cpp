#pragma once
#include <iostream>

using namespace std;

class DataStore {
private:
	// int datas[100];
	int* datas; // �����Ҵ��� ���� �ּҷ� ����
	int i;
public:
	DataStore();
	~DataStore();
	void setData(int data);
	int getData(int index);
};