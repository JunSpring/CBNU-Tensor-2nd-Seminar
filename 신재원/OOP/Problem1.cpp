#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));  // �õ� ����

    int number = rand() % 100 + 1;  // 1 ~ 100 ������ ������ ���� ����
    int guess, count = 0;  // ����ڰ� ������ ���ڿ� �õ� Ƚ�� ���� ����

    cout << "���� ���߱� ���̿� ���Ű� ȯ���մϴ�!!" << endl;

    do {
        cout << "1�������� 100������ ���� �� �ϳ��� �����غ�����: ";
        cin >> guess;
        count++;

        if (guess < number) {
            cout << "���亸�� ���ڰ� �����ϴ�. �ٽ� �õ����ּ���." << endl;
        }
        else if (guess > number) {
            cout << "���亸�� ���ڰ� �����ϴ�. �ٽ� �õ����ּ���." << endl;
        }
        else {
            cout << "�����մϴ�! ����� �� " << count << "���� �õ����� ����߽��ϴ�!" << endl;
        }
    } while (guess != number);

    return 0;
}