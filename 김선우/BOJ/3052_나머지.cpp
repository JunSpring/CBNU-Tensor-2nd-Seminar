
#include <iostream>
using namespace std;


int main() {
	int res[10];
	for (int i = 0; i < 10; i++) {
		cin >> res[i];
		if (res[i] < 0 || res[i]>1000) {
			return 0;
		}
	}
	int ary[50] = { 0 };
	for (int i = 0; i < 10; i++) {
		ary[res[i] % 42]++;
	}
	int b = 0;
	for (int i = 0; i < 50; i++) {
		if (ary[i] > 0) {
			b++;
		}
	}
	cout << b;
}