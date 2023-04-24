#include "Student.h"

Student::Student(const std::string& name) : name(name) {
    std::cout << name << " 학생이 등록되었음" << std::endl;
}

Student::Student(const Student& other)
    : age(other.age), name(other.name), major(other.major),
    student_id(other.student_id), phone_number(other.phone_number)
{
    std::cout << name << " 학생이 복사되었음" << std::endl;
}

Student::~Student() {
    std::cout << name << " 학생이 삭제되었음" << std::endl;
}

void Student::set_age(int age) {
    this->age = age;
}

void Student::set_major(const std::string& major) {
    this->major = major;
}

void Student::set_student_id(const std::string& student_id) {
    this->student_id = student_id;
}

void Student::set_phone_number(const std::string& phone_number) {
    this->phone_number = phone_number;
}

void Student::print_info() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Major: " << major << std::endl;
    std::cout << "Student ID: " << student_id << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
}

void Student::print_all(const Student* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Student " << i + 1 << ":" << std::endl;
        arr[i].print_info();
        std::cout << std::endl;
    }
}
