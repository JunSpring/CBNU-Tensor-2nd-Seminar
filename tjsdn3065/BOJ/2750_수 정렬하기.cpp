#include <iostream>
using namespace std;

//오름차순
int main() {
	int a;
	cin >> a;
	int p[] = { 0 };
	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}
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