#include <iostream>
using namespace std;

int main() {
	int unit[5][4];
	int sum[5] = { 0,0,0,0,0 };
	int ranking = 0;
	int score = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> unit[i][j];
			sum[i] += unit[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		if (sum[i] > score) {
			ranking = i+1;
			score = sum[i];
		}
	}
	cout << ranking << " " << score;
}