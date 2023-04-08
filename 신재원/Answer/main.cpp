#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student student1("정준범");
    student1.setAge(22);
    student1.setDepartment("지능로봇공학과");
    student1.setStudentId("2021042018");
    student1.setPhoneNumber("01012345678");

    Student student2("이지원");
    student2.setAge(23);
    student2.setDepartment("지능로봇공학과");
    student2.setStudentId("2021042020");
    student2.setPhoneNumber("01091011121");

    Student student3("조경빈");
    student3.setAge(22);
    student3.setDepartment("지능로봇공학과");
    student3.setStudentId("2021042005");
    student3.setPhoneNumber("01031415161");

    student1.printAll();
    student2.printAll();
    student3.printAll();

    return 0;
}