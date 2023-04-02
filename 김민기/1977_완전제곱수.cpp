#include <iostream>
#include <cstring>

using namespace std;


int main() {
	int M, N;
	int sum = 0, count = 0;
	int num = 10001;

	cin >> M >> N;

	for (int i = 1; i <= 100; i++) {
		if (M <= i * i && i * i <= N) {
			sum += i * i;
			count++;
		}
		if (M <= i * i && i * i <= N && i * i <= num) {
			num = i * i;
		}
	}
	if (count == 0) {
		cout << "-1";
	}_
	else {
		cout << sum << '\n' << num;
	}
}