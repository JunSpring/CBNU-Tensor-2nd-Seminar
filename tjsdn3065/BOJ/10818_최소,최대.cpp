#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int* p = new int[a];
	for (int i = 0; i < a; i++)
		cin >> p[i];
	int b = -1000000, c = 1000000;
	for (int i = 0; i < a; i++) {
		if (b < p[i])
			b = p[i];
	}
	for (int i = 0; i < a; i++) {
		if (c > p[i])
			c = p[i];
	}
	cout << c << ' ' << b;
	delete[] p;
}