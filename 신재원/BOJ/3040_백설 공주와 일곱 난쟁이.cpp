#include <iostream>
using namespace std;

int main() {
	int smallPeople[9]; //모든 난쟁이들
	int sum = 0; //난쟁이들의 숫자의 합
	int fake_1, fake_2; //가짜 난쟁이

	for (int i = 0; i < 9; i++) { //난쟁이를 입력받고 합을 구하는 반복문
		cin >> smallPeople[i];
		sum += smallPeople[i];
	}

	for (int i = 0; i < 9; i++) { //가짜 난쟁이를 판별해내는 반복문
		for (int j = 0; j < 9; j++) {
			if (i != j) {
				if (sum - smallPeople[i] - smallPeople[j] == 100) { 
					fake_1 = i;
					fake_2 = j;
				}
			}
		}
	}

	for (int i = 0; i < 9; i++) { /*
		가짜 난쟁이를 제외하고 출력하는 반복문 
		이 문장을 가짜 난쟁이를 판별해내는 반목문에 넣고 싶었으나 실패 ㅠ
		*/
		if (i == fake_1 || i == fake_2) {
			continue;
		}
		else {
			cout << smallPeople[i] << endl;
		}
	}


}
