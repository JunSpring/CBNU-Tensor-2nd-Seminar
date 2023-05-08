#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a < 1 || a>1000) {
		return 0;
	}
	if (b < 1 || b>1000) {
		return 0;
	}
	if (b < a) {
		return 0;
	}
	int c = 0;
	c = a + 1;
	int d = 0;
	for (c; c < b; c++) {
		d += c;
	}
	cout << d;
}