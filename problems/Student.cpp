#include <iostream>
#include "Student.h"

Student::Student(std::string name) {
    this->name = name;
    std::cout << name << " 학생이 등록되었음" << std::endl;
}

Student::~Student() {
    std::cout << name << " 학생이 삭제되었음" << std::endl;
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
    std::cout << "나이: " << age << std::endl;
}

void Student::printDepartment() {
    std::cout << "학과: " << department << std::endl;
}

void Student::printStudentID() {
    std::cout << "학번: " << studentID << std::endl;
}

void Student::printPhoneNumber() {
    std::cout << "전화번호: " << phoneNumber << std::endl;
}

void Student::printAll() {
    std::cout << "이름: " << name << std::endl;
    printAge();
    printDepartment();
    printStudentID();
    printPhoneNumber();
}
