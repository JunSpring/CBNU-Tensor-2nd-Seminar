#include <iostream>
using namespace std;


int main() {
	int p[10];
	for (int i = 0; i < 10; i++) {
		cin >> p[i];
	}
	int a = 0;
	int b;
	for (int i = 0; i < 10; i++) {
		a += p[i];
		b = a / 10;
	}
	int q[100] = { 0 };
	for (int i = 0; i < 10; i++) {
		q[p[i]]++;
	}
	int c = 0;
	int d;
	for (int i = 0; i < 10; i++) {
		if (c < q[p[i]]) {
			c = q[p[i]];
			d = p[i];
		}
	}
	cout << b << endl << d << endl;
}