#include <iostream>
using namespace std;
#include <string>


class Student {
	int age;
	string name, classname, classnum, tel;
public:
	Student(string name) {
		this->name = name;
	}
	void setage(int age) {
		this->age = age;
	}
	void setclassnum(string classnum) {
		this->classnum = classnum;
	}
	void settel(string tel) {
		this->tel = tel;
	}
	void setclassname(string classname) {
		this->classname = classname;
	}
	void coutname() {
		cout << name;
	}
	void coutage() {
		cout << age;
	}
	void coutclassnum() {
		cout << classnum;
	}
	void couttel() {
		cout << tel;
	}
	void coutcalssname() {
		cout << classname;
	}
	void all() {
		cout << age << "»ì " << name << ' ' << classname << ' ' << classnum << ' ' << tel << endl;
	}
	bool operator>(Student op2) {
		if (this->age > op2.age)return true;
		else return false;
	}
	bool operator<(Student op2) {
		if (this->name < op2.name)return true;
		else return false;
	}

};