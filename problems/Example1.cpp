#include <iostream>
#include <string>

using namespace std;

struct Person 
{
    string name;
    int age;
    string address;
};

void setValueByValue(Person p)
{
    p.age = 30;
}

void setValueByAddress(Person* p) 
{
    p->age = 40;
}

void printValueByReference(const Person& p) 
{
    cout << "Name: " << p.name << ", Address: " << p.address << endl;
}

int main() 
{
    Person p = { "John", 20, "New York" };
    cout << "Before setValueByValue - Age: " << p.age << endl;
    setValueByValue(p);
    cout << "After setValueByValue - Age: " << p.age << endl;

    cout << "Before setValueByAddress - Age: " << p.age << endl;
    setValueByAddress(&p);
    cout << "After setValueByAddress - Age: " << p.age << endl;

    cout << "Before printValueByReference - Name: " << p.name << ", Address: " << p.address << endl;
    printValueByReference(p);
    cout << "After printValueByReference - Name: " << p.name << ", Address: " << p.address << endl;

    return 0;
} 
