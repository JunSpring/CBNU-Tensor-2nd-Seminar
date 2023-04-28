#include <iostream>


//오름차순
int main() {
	cout << "몇 개 원함(1~1000)?" << endl;
	int a;
	cin >> a;
	cout << a << "개 수 입력(-1000~1000)" << endl;
	int p[] = { 0 };
	for (int i = 0; i < a; i++) {
		cin >> p[i];
		if (p[i] < -1000 || p[i]>1000)
			return 0;
	}
	cout << "결과" << endl;
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