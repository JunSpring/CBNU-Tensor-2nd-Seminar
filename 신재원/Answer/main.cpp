#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student student1("���ع�");
    student1.setAge(22);
    student1.setDepartment("���ɷκ����а�");
    student1.setStudentId("2021042018");
    student1.setPhoneNumber("01012345678");

    Student student2("������");
    student2.setAge(23);
    student2.setDepartment("���ɷκ����а�");
    student2.setStudentId("2021042020");
    student2.setPhoneNumber("01091011121");

    Student student3("�����");
    student3.setAge(22);
    student3.setDepartment("���ɷκ����а�");
    student3.setStudentId("2021042005");
    student3.setPhoneNumber("01031415161");

    student1.printAll();
    student2.printAll();
    student3.printAll();

    return 0;
}