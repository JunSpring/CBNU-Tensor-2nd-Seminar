#include "Student3.h"


int main() {
	Student a("���ع�");
	a.setage(22);
	a.setclassname("���ɷκ����а�");
	a.setclassnum("2021042018");
	a.settel("01012345678");
	a.all();
	Student b("������");
	b.setage(23);
	b.setclassname("���ɷκ����а�");
	b.setclassnum("2021042020");
	b.settel("01091011121");
	b.all();
	Student c("�����");
	c.setage(22);
	c.setclassname("���ɷκ����а�");
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