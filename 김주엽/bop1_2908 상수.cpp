#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string num1, num2; // �� ���� ���ڿ��� �Է� ���� ����
    cin >> num1 >> num2; // �� �� �Է� ����

    reverse(num1.begin(), num1.end()); // ���ڿ��� ����� ū ���� ã�� ����
    reverse(num2.begin(), num2.end());

    int int1 = stoi(num1); // ������ ���ڿ��� ������ ��ȯ
    int int2 = stoi(num2);

    cout << max(int1, int2) << endl; // �� �� �� ū �� ���
    return 0;
}