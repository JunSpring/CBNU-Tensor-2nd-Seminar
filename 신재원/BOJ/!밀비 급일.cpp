#include<iostream>
#include<string>
using namespace std;

int main() {

	while (1) {
		string password;
		getline(cin, password);
		int length = password.length();
		if (password == "END") {
			break;
		}
		for (int i = length; i > -1; i--) {
			cout << password[i];
		}
		cout << endl;
	}
	
}