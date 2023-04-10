#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string _name) {
    name = _name;
    cout << name << " 학생이 등록되었음" << endl;
}

Student::~Student() {
    cout << name << " 학생이 삭제되었음" << endl;
}

void Student::setAge(int _age) {
    age = _age;
}

void Student::setName(string _name) {
    name = _name;
}

void Student::setDepartment(string _department) {
    department = _department;
}

void Student::setStudentId(string _student_id) {
    student_id = _student_id;
}

void Student::setPhoneNumber(string _phone_number) {
    phone_number = _phone_number;
}

void Student::printAge() {
    cout << "나이: " << age << endl;
}

void Student::printName() {
    cout << "이름: " << name << endl;
}

void Student::printDepartment() {
    cout << "학과: " << department << endl;
}

void Student::printStudentId() {
    cout << "학번: " << student_id << endl;
}

void Student::printPhoneNumber() {
    cout << "전화번호: " << phone_number << endl;
}

void Student::printAll() {
    cout << "--------------------------" << endl;
    printAge();
    printName();
    printDepartment();
    printStudentId();
    printPhoneNumber();
    cout << "--------------------------" << endl;
}