#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string num1, num2; // 두 수를 문자열로 입력 받을 변수
    cin >> num1 >> num2; // 두 수 입력 받음

    reverse(num1.begin(), num1.end()); // 문자열을 뒤집어서 큰 수를 찾기 위해
    reverse(num2.begin(), num2.end());

    int int1 = stoi(num1); // 뒤집은 문자열을 정수로 변환
    int int2 = stoi(num2);

    cout << max(int1, int2) << endl; // 두 수 중 큰 수 출력
    return 0;
}