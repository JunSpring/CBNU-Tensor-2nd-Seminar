#include <iostream>
using namespace std;
#include <string>

//모르겠습니다.
class Student {
	string age, name, cn, sn, num;
public:
	void getinf(string age, string name, string cn, string sn, string num);
	class Student();
};
Student::Student() {
	cout << "이름>> ";
	string a;
	cin >> a;
	cout << a << "학생이 등록되었습니다.";
}
void Student::getinf(string age, string name, string cn, string sn, string num) {
	this->name = name;
	this->age = age;
	this->cn = cn;
	this->sn = sn;
	this->num = num;
	cout << age << ' ' << name << ' ' << cn << ' ' << sn << ' ' << num << endl;
}
int main() {
	string age, name, cn, sn, num;
	Student s[3];
	for (int i = 0; i < 3; i++) {
		cout << "나이 이름 학과 학번 전번\n";
		cin >> age >> name >> cn >> sn >> num;
		cout << "당신의 정보는\n";
		s[i].getinf(age, name, cn, sn, num);
		if (i == 2) {
			cout << "모든 정보\n";
			for (int i = 0; i < 3; i++) {
				s[i].getinf(age, name, cn, sn, num);
			}
		}
	}
}