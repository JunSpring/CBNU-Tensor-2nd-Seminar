#include <iostream>
using namespace std;
#include <string>



int main() {
	int a = 0, b = 0;
	cout << "�� ���� �� �ڸ� ���� �Է��ϼ���.(���� �� �� �ǰ� 0���� �ȵ˴ϴ�)\n";
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