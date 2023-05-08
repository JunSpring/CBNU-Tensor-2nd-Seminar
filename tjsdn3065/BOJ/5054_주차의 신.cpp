#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int* q = new int[a];
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		int* p = new int[b];
		for (int j = 0; j < b; j++) {
			cin >> p[j];
		}
		int e = 0;
		int f = 99;
		for (int j = 0; j < b; j++) {
			if (e < p[j])//ÃÖ´ñ°ª
				e = p[j];
		}
		for (int j = 0; j < b; j++) {
			if (f > p[j])//ÃÖ¼Ú°ª
				f = p[j];
		}
		q[i] = e - f;
		delete[] p;
	}
	for (int i = 0; i < a; i++) {
		cout << 2 * q[i] << endl;
	}
	delete[] q;
}