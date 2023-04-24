#include <iostream>
using namespace std;

int reverse(int n) {
    int reversed_num = 0;
    while (n > 0) {
        reversed_num = reversed_num * 10 + (n % 10);
        n /= 10;
    }
    return reversed_num;
}

int main() {
    int x, y;
    cin >> x >> y;

    int rev_sum = reverse(x) + reverse(y);
    cout << reverse(rev_sum) << endl;

    return 0;
}
