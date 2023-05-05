#include <iostream>
using namespace std;


int main() {
	int a[5][4];
	int b[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
		b[i] = a[i][0] + a[i][1] + a[i][2] + a[i][3];
	}
	int c = 0;
	int d;
	for (int i = 0; i < 5; i++) {
		if (c < b[i]) {
			c = b[i];
			d = i;
		}
	}
	cout << d + 1 << ' ' << c;
}