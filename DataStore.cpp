#include <iostream>

using namespace std;

class DataStore {
private:
	// int datas[100];
	int* datas; // �����Ҵ��� ���� �ּҷ� ����
	int i;
public:

	DataStore() :
		i(0)
	{
		datas = new int[100];
	}

	// �Ҹ����� ���� -> ��ü �ȿ��� �����Ҵ� �� �޸𸮸� �����ϱ� ���� ����
	~DataStore() {
		delete datas; // ������ �ȿ� ����� �����Ҵ��� �Ҹ��ϸ鼭 ���� ����
		cout << "��ü�� ������ϴ�" << endl;
	}

	void setData(int data) {
		datas[i++] = data;
	}

	int getData(int index) {
		return datas[index];
	}
};