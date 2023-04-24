#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;

Student::Student(const char* name) {
    int length = strlen(name) + 1;
    this->name = new char[length];
    strcpy_s(this->name, length, name);
    cout << name << " �л��� ��ϵǾ���" << endl;
}

Student::Student(const Student& copy) {
    this->age = copy.age;
    this->name = new char[strlen(copy.name) + 1];
    strcpy_s(this->name, strlen(copy.name) + 1, copy.name);
    this->department = new char[strlen(copy.department) + 1];
    strcpy_s(this->department, strlen(copy.department) + 1, copy.department);
    this->student_id = new char[strlen(copy.student_id) + 1];
    strcpy_s(this->student_id, strlen(copy.student_id) + 1, copy.student_id);
    this->phone_number = new char[strlen(copy.phone_number) + 1];
    strcpy_s(this->phone_number, strlen(copy.phone_number) + 1, copy.phone_number);
}

Student::~Student() {
    cout << name << " �л��� �����Ǿ���" << endl;
    delete[] name;
    delete[] department;
    delete[] student_id;
    delete[] phone_number; 
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setName(const char* name) {
    int length = strlen(name) + 1;
    this->name = new char[length];
    strcpy_s(this->name, length, name);
}

void Student::setDepartment(const char* department) {
    int length = strlen(department) + 1;
    this->department = new char[length];
    strcpy_s(this->department, length, department);
}

void Student::setStudentId(const char* student_id) {
    int length = strlen(student_id) + 1;
    this->student_id = new char[length];
    strcpy_s(this->student_id, length, student_id);
}

void Student::setPhoneNumber(const char* phone_number) {
    int length = strlen(phone_number) + 1;
    this->phone_number = new char[length];
    strcpy_s(this->phone_number, length, phone_number);
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
    cout << "--------------------------" << endl;
    printAge();
    printName();
    printDepartment();
    printStudentId();
    printPhoneNumber();
    cout << "--------------------------" << endl;
}