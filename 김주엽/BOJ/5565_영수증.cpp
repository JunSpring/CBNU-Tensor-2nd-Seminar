#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int total, sum = 0;
    int prices[9];

    cin >> total;

    for (int i = 0; i < 9; i++) {
        cin >> prices[i];
        sum += prices[i];
    }


    cout << total - sum << endl;

    return 0;
}