#include "Student.h"

int main() {
    const int num_students = 3;
    Student* students = new Student[num_students]{
        Student("���ع�"), Student("������"), Student("�����")
    };

    students[0].set_age(22);
    students[0].set_major("���ɷκ����а�");
    students[0].set_student_id("2021042018");
    students[0].set_phone_number("01012345678");

    students[1].set_age(23);
    students[1].set_major("���ɷκ����а�");
    students[1].set_student_id("2021042020");
    students[1].set_phone_number("01091011121");

    students[2].set_age(22);
    students[2].set_major("���ɷκ����а�");
    students[2].set_student_id("2021042005");
    students[2].set_phone_number("01031415161");


}