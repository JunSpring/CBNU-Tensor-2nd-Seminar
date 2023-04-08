#include <iostream>
#include "Student.h"

Student::Student(std::string name) {
    this->name = name;
    std::cout << name << " �л��� ��ϵǾ���" << std::endl;
}

Student::~Student() {
    std::cout << name << " �л��� �����Ǿ���" << std::endl;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDepartment(std::string department) {
    this->department = department;
}

void Student::setStudentID(std::string studentID) {
    this->studentID = studentID;
}

void Student::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Student::printAge() {
    std::cout << "����: " << age << std::endl;
}

void Student::printDepartment() {
    std::cout << "�а�: " << department << std::endl;
}

void Student::printStudentID() {
    std::cout << "�й�: " << studentID << std::endl;
}

void Student::printPhoneNumber() {
    std::cout << "��ȭ��ȣ: " << phoneNumber << std::endl;
}

void Student::printAll() {
    std::cout << "�̸�: " << name << std::endl;
    printAge();
    printDepartment();
    printStudentID();
    printPhoneNumber();
}
