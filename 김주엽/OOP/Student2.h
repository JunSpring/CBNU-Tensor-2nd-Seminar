#pragma once
#include <iostream>

class Student {
private:
    int age;
    std::string name;
    std::string major;
    std::string student_id;
    std::string phone_number;
public:
    Student(const std::string& name);
    Student(const Student& other);
    ~Student();
    void set_age(int age);
    void set_major(const std::string& major);
    void set_student_id(const std::string& student_id);
    void set_phone_number(const std::string& phone_number);
    void print_info() const;
    static void print_all(const Student* arr, int size);
};
