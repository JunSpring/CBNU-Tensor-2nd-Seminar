#include <iostream>
#include "Student.h"

int main() {
    Student junbeom("���ع�");
    junbeom.setAge(22);
    junbeom.setDepartment("���ɷκ����а�");
    junbeom.setStudentID("2021042018");
    junbeom.setPhoneNumber("01012345678");

    Student jiwon("������");
    jiwon.setAge(23);
    jiwon.setDepartment("���ɷκ����а�");
    jiwon.setStudentID("2021042020");
    jiwon.setPhoneNumber("01091011121");

    Student kyoungbin("�����");
    kyoungbin.setAge(22);
    kyoungbin.setDepartment("���ɷκ����а�");
    kyoungbin.setStudentID("2021042005");
    kyoungbin.setPhoneNumber("01031415161");

    std::cout << "��� ���� ���" << std::endl;
    junbeom.printAll();
    jiwon.printAll();
    kyoungbin.printAll();

    return 0;
}
