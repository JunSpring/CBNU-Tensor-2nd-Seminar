#include <iostream>
using namespace std;

int main() {
	int burger[3];
	int drink[2];
	int set = 9999;

	for (int i = 0; i < 3; i++) {
		cin >> burger[i];
	}

	for (int i = 0; i < 2; i++) {
		cin >> drink[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (set > burger[i] + drink[j]) {
				set = burger[i] + drink[j];
			}
		}
	}
	cout << set-50;
}