#include <iostream>
using namespace std;
#include <string>

//�𸣰ڽ��ϴ�.
class Student {
	string age, name, cn, sn, num;
public:
	void getinf(string age, string name, string cn, string sn, string num);
	class Student();
};
Student::Student() {
	cout << "�̸�>> ";
	string a;
	cin >> a;
	cout << a << "�л��� ��ϵǾ����ϴ�.";
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
		cout << "���� �̸� �а� �й� ����\n";
		cin >> age >> name >> cn >> sn >> num;
		cout << "����� ������\n";
		s[i].getinf(age, name, cn, sn, num);
		if (i == 2) {
			cout << "��� ����\n";
			for (int i = 0; i < 3; i++) {
				s[i].getinf(age, name, cn, sn, num);
			}
		}
	}
}