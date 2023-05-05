#include "Student3.h"


int main() {
	Student a("정준범");
	a.setage(22);
	a.setclassname("지능로봇공학과");
	a.setclassnum("2021042018");
	a.settel("01012345678");
	a.all();
	Student b("이지원");
	b.setage(23);
	b.setclassname("지능로봇공학과");
	b.setclassnum("2021042020");
	b.settel("01091011121");
	b.all();
	Student c("조경빈");
	c.setage(22);
	c.setclassname("지능로봇공학과");
	c.setclassnum("2021042005");
	c.settel("01031415161");
	c.all();
	if (a > b) {
		if (a > c)a.coutname();
		else c.coutname();
	}
	else {
		if (b > c)b.coutname();
		else c.coutname();
	}
	cout << endl;
	if (a < b) {
		if (a < c)a.coutname();
		else c.coutname();
	}
	else {
		if (b < c)b.coutname();
		else c.coutname();
	}
}