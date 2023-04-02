#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string _name) {
    name = _name;
    cout << name << " �л��� ��ϵǾ���" << endl;
}

Student::~Student() {
    cout << name << " �л��� �����Ǿ���" << endl;
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
    cout << "����: " << age << endl;
}

void Student::printName() {
    cout << "�̸�: " << name << endl;
}

void Student::printDepartment() {
    cout << "�а�: " << department << endl;
}

void Student::printStudentId() {
    cout << "�й�: " << student_id << endl;
}

void Student::printPhoneNumber() {
    cout << "��ȭ��ȣ: " << phone_number << endl;
}

void Student::printAll() {
    printAge();
    printName();
    printDepartment();
    printStudentId();
    printPhoneNumber();
}