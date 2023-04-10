#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int n1, n2, n3;
	n1 = a / 100;
	n2 = (a / 10) % 10;
	n3 = a % 10;

	int m1, m2, m3;
	m1 = b / 100;
	m2 = (b / 10) % 10;
	m3 = b % 10;

	int res1, res2;
	res1 = n3 * 100 + n2 * 10 + n1;
	res2 = m3 * 100 + m2 * 10 + m1;

	if (res1 < res2) {
		cout << res2 << endl;
	}
	else if (res1 > res2) {
		cout << res1 << endl;
	}
}
