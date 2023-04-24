#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int num, sum = 0, min_even = 101;
        for (int i = 0; i < 7; i++) {
            cin >> num;
            if (num % 2 == 0) {
                sum += num;
                if (num < min_even) min_even = num;
            }
        }
        cout << sum << " " << min_even << "\n";
    }

    return 0;
}
