#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string department;
    std::string studentID;
    std::string phoneNumber;

public:
    Student(std::string name);
    ~Student();

    void setAge(int age);
    void setDepartment(std::string department);
    void setStudentID(std::string studentID);
    void setPhoneNumber(std::string phoneNumber);

    void printAge();
    void printDepartment();
    void printStudentID();
    void printPhoneNumber();
    void printAll();
};

#endif
