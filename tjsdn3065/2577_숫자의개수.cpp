#include <iostream>
using namespace std;



int main() {
	int a, b, c;
	int n = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a < 100 || a >= 1000)
		return 0;
	if (b < 100 || b >= 1000)
		return 0;
	if (c < 100 || c >= 1000)
		return 0;
	n = a * b * c;
	if (9999999 >= n && 1000000 <= n) {
		int f[7];
		for (int i = 0; i < 7; i++)
		{
			f[i] = n % 10;
			n = n / 10;
		}
		for (int k = 0; k < 10; k++) {
			int m = 0;
			for (int i = 0; i < 7; i++) {
				if (k == f[i]) {
					m += 1;
				}
			}
			cout << m << endl;
		}
	}
	else if (99999999 >= n && 1000000 <= n) {
		int f[8];
		for (int i = 0; i < 8; i++)
		{
			f[i] = n % 10;
			n = n / 10;
		}
		for (int k = 0; k < 10; k++) {
			int m = 0;
			for (int i = 0; i < 8; i++) {
				if (k == f[i]) {
					m += 1;
				}
			}
			cout << m << endl;
		}
	}
	else if (999999999 >= n && 10000000 <= n) {
		int f[9];
		for (int i = 0; i < 9; i++)
		{
			f[i] = n % 10;
			n = n / 10;
		}
		for (int k = 0; k < 10; k++) {
			int m = 0;
			for (int i = 0; i < 9; i++) {
				if (k == f[i]) {
					m += 1;
				}
			}
			cout << m << endl;
		}
	}
}