#include <iostream>
#include "DataStore.h"

using namespace std;
	DataStore::DataStore() :
		i(0)
	{
		datas = new int[100];
	}

	// �Ҹ����� ���� -> ��ü �ȿ��� �����Ҵ� �� �޸𸮸� �����ϱ� ���� ����
	DataStore::~DataStore() {
		delete datas; // ������ �ȿ� ����� �����Ҵ��� �Ҹ��ϸ鼭 ���� ����
		cout << "��ü�� ������ϴ�" << endl;
	}

	void DataStore::setData(int data) {
		datas[i++] = data;
	}

	int DataStore::getData(int index) {
		return datas[index];
	}