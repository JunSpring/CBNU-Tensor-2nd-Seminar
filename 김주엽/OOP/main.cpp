#include <iostream>
#include "Student.h"

int main() {
    Student junbeom("정준범");
    junbeom.setAge(22);
    junbeom.setDepartment("지능로봇공학과");
    junbeom.setStudentID("2021042018");
    junbeom.setPhoneNumber("01012345678");

    Student jiwon("이지원");
    jiwon.setAge(23);
    jiwon.setDepartment("지능로봇공학과");
    jiwon.setStudentID("2021042020");
    jiwon.setPhoneNumber("01091011121");

    Student kyoungbin("조경빈");
    kyoungbin.setAge(22);
    kyoungbin.setDepartment("지능로봇공학과");
    kyoungbin.setStudentID("2021042005");
    kyoungbin.setPhoneNumber("01031415161");

    std::cout << "모든 정보 출력" << std::endl;
    junbeom.printAll();
    jiwon.printAll();
    kyoungbin.printAll();

    return 0;
}
