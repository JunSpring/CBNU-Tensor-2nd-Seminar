#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student* StArray = new Student[3]{
        Student("���ع�"),
        Student("������"),
        Student("�����")
    };
    StArray[0].setAge(22);
    StArray[0].setDepartment("���ɷκ����а�");
    StArray[0].setStudentId("2021042018");
    StArray[0].setPhoneNumber("01012345678");

    StArray[1].setAge(23);
    StArray[1].setDepartment("���ɷκ����а�");
    StArray[1].setStudentId("2021042020");
    StArray[1].setPhoneNumber("01091011121");

    StArray[2].setAge(22);
    StArray[2].setDepartment("���ɷκ����а�");
    StArray[2].setStudentId("2021042005");
    StArray[2].setPhoneNumber("01031415161");

    Student Mecha_Junspring(StArray[0]);

    StArray[0].printAll();
    StArray[1].printAll();
    StArray[2].printAll();
    Mecha_Junspring.printAll();
    return 0;
}