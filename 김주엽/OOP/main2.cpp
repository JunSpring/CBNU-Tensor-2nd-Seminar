#include "Student.h"

int main() {
    const int num_students = 3;
    Student* students = new Student[num_students]{
        Student("정준범"), Student("이지원"), Student("조경빈")
    };

    students[0].set_age(22);
    students[0].set_major("지능로봇공학과");
    students[0].set_student_id("2021042018");
    students[0].set_phone_number("01012345678");

    students[1].set_age(23);
    students[1].set_major("지능로봇공학과");
    students[1].set_student_id("2021042020");
    students[1].set_phone_number("01091011121");

    students[2].set_age(22);
    students[2].set_major("지능로봇공학과");
    students[2].set_student_id("2021042005");
    students[2].set_phone_number("01031415161");


}