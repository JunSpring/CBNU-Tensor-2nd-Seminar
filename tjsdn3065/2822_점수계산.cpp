#include <iostream>


int main() {
	cout << "8개 점수 입력(0~150)" << endl;
	int p[8];//입력받은 8개 정수 배열에 넣기
	for (int i = 0; i < 8; i++) {
		cin >> p[i];
		if (p[i] < 0 || p[i]>150) {
			return 0;
		}
	}
	cout << "총점" << endl;
	int b = 0;
	int s[5];//5개가 몇 번자리에 있는지 저장
	for (int j = 0; j < 5; j++) {//최댓값 구하고 0으로 초기화 하고 2번째 최댓값 구하고 반복
		int a = 0;
		for (int i = 0; i < 8; i++) {
			if (a < p[i])
				a = p[i];//최댓값
		}
		for (int i = 0; i < 8; i++) {
			if (a == p[i]) {
				p[i] = 0;//최댓값 0으로 초기화
				b += a;//가장 높은 수 5개 더하기
				s[j] = i + 1;//몇 번자리 였는지 저장
			}
		}
	}
	cout << b << endl;//총점 출력
	for (int j = 0; j < 5; j++) {//5개 숫자 낮은 번호부터 출력
		int a = 9;
		for (int i = 0; i < 5; i++) {//이것도 최솟값 구하고 0으로 초기화 다시 2번쨰 최솟값 반복
			if (a > s[i])
				a = s[i];
		}
		cout << a << ' ';
		for (int i = 0; i < 5; i++) {
			if (a == s[i])
				s[i] = 9;
		}
	}
}