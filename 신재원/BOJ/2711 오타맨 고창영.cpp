#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int position;
		string str;
		cin >> position >> str;
		for (int j = 0; j < str.length(); j++) {
			if (j != position - 1) {
				cout << str[j];
			}
		}
		cout << endl;
	}
}