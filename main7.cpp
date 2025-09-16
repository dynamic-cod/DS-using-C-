//program to use this pointer and return the pointer reference.
#include <iostream>
#include <string>
using namespace std;

// Class to represent a person
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person() {
        name = "";
        age = 0;
    }

    // Member function to set name using this pointer
    Person* setName(string name) {
        this->name = name;
        return this;  // Return pointer to current object
    }

    // Member function to set age using this pointer
    Person* setAge(int age) {
        this->age = age;
        return this;  // Return pointer to current object
    }

    // Member function to display data
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};

int main() {
    Person p;

    // Method chaining using 'this' pointer
    p.setName("Alice")->setAge(25)->display();

    return 0;
}

