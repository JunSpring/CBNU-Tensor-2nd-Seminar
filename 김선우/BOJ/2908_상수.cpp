#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cout << "두 개의 세 자리 수를 입력하세요.(같은 수 안 되고 0포함 안됩니다)\n";
	int num1, num2;
	cin >> num1 >> num2;
	while (num1 != 0)
	{
		a *= 10;
		a += num1 % 10;
		num1 /= 10;
	}

	while (num2 != 0)
	{
		b *= 10;
		b += num2 % 10;
		num2 /= 10;
	}

	if (a > b) {
		cout << a;
	}
	else
		cout << b;
}