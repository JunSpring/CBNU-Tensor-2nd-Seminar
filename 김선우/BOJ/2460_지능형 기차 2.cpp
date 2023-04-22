#include <iostream>
using namespace std;


int main() {
	int a, b, m = 0, t = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		t -= a;
		t += b;
		if (m < t) {
			m = t;
		}
	}
	cout << m;
}
