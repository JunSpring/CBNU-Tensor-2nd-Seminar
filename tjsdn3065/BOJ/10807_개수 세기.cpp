#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int p[100] = { 200 };
	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}
	int b;
	cin >> b;
	int c = 0;
	for (int i = 0; i < a; i++) {
		if (b == p[i])
			c++;
	}
	cout << c;
}