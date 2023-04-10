#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));  // 시드 설정

    int number = rand() % 100 + 1;  // 1 ~ 100 사이의 랜덤한 숫자 생성
    int guess, count = 0;  // 사용자가 추측한 숫자와 시도 횟수 저장 변수

    cout << "숫자 맞추기 놀이에 오신걸 환영합니다!!" << endl;

    do {
        cout << "1에서부터 100까지의 숫자 중 하나를 추측해보세요: ";
        cin >> guess;
        count++;

        if (guess < number) {
            cout << "정답보다 숫자가 낮습니다. 다시 시도해주세요." << endl;
        }
        else if (guess > number) {
            cout << "정답보다 숫자가 높습니다. 다시 시도해주세요." << endl;
        }
        else {
            cout << "축하합니다! 당신은 총 " << count << "번의 시도만에 통과했습니다!" << endl;
        }
    } while (guess != number);

    return 0;
}