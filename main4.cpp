//program to create 3 objects, class, data member(name, roll_no), set_data function, print() member function, use this pointer
#include <iostream>     // For input and output operations
#include <string>       // For using the string class
using namespace std;

// Class definition
class pntr_oj {
private:
    int roll_no;        // Data member to store student's roll number
    string name;        // Data member to store student's name

public:
    // Member function to set the values of roll_no and name
    void set_data(int roll, string nm) {
        roll_no = roll; // Assign the given roll number to the object
        name = nm;      // Assign the given name to the object
    }

    // Member function to print object details and which object called it
    void print() {
        // 'this' is a pointer to the object that invoked this method
        // It shows the memory address of the object
        cout << "Object at address " << this << " invoked print()" << endl;

        // Print the object's data
        cout << "Roll No: " << roll_no << ", Name: " << name << endl;

        cout << "--------------------------------------" << endl;
    }
};

int main() {
    // Create three objects of class pntr_oj
    pntr_oj obj1, obj2, obj3;

    // Set data for each object using the set_data() function
    obj1.set_data(101, "Alice");
    obj2.set_data(102, "Bob");
    obj3.set_data(103, "Charlie");

    // Call print() method for each object
    // The 'this' pointer inside print() will show which object called it
    obj1.print();  // Will display data for obj1 and its memory address
    obj2.print();  // Will display data for obj2 and its memory address
    obj3.print();  // Will display data for obj3 and its memory address

    return 0;   // Successful program termination
}

