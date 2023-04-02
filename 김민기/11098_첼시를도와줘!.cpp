# include <iostream>
using namespace std;

int main() {

    int n, p;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> p;
        int price;
        string name;

        int max = 0;
        string result;
        for (int j = 0; j < p; j++) {
            cin >> price >> name;
            if (price > max) {
                max = price;
                result = name;
            }
        }
        cout << result << endl;
    }

    return 0;
}
