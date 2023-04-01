#pragma once
#include <string>
using namespace std;

class Student {
private:
    int age;
    string name;
    string department;
    string student_id;
    string phone_number;
public:
    Student(string _name);
    ~Student();
    void setAge(int _age);
    void setName(string _name);
    void setDepartment(string _department);
    void setStudentId(string _student_id);
    void setPhoneNumber(string _phone_number);
    void printAge();
    void printName();
    void printDepartment();
    void printStudentId();
    void printPhoneNumber();
    void printAll();
};