#include <iostream>


//��������
int main() {
	cout << "�� �� ����(1~1000)?" << endl;
	int a;
	cin >> a;
	cout << a << "�� �� �Է�(-1000~1000)" << endl;
	int p[] = { 0 };
	for (int i = 0; i < a; i++) {
		cin >> p[i];
		if (p[i] < -1000 || p[i]>1000)
			return 0;
	}
	cout << "���" << endl;
	for (int i = 0; i < a; i++) {
		int b = 1000;
		for (int i = 0; i < a; i++) {
			if (b > p[i])
				b = p[i];
		}
		cout << b << endl;
		for (int i = 0; i < a; i++) {
			if (b == p[i])
				p[i] = 1000;
		}
	}
}