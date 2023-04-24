#pragma once
#include <string>
using namespace std;

class Student {
private:
    int age;
    char* name;
    char* department;
    char* student_id;
    char* phone_number;
public:
    Student(const char* name);
    Student(const Student& copy);
    ~Student();
    void setAge(int age);
    void setName(const char* name);
    void setDepartment(const char* department);
    void setStudentId(const char* student_id);
    void setPhoneNumber(const char* phone_number);
    void printAge();
    void printName();
    void printDepartment();
    void printStudentId();
    void printPhoneNumber();
    void printAll();
};