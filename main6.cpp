//program to implement flight class with dat memebers and displaying the data using this pointer.
#include <iostream>
#include <string>
using namespace std;

// Class to represent a Flight
class Flight {
private:
    int flightNo;             // Flight number
    string source;            // Source location
    string destination;       // Destination location
    float fare;               // Fare of the flight

public:
    // Constructor to initialize flight data
    Flight(int fNo, string src, string dest, float f) {
        this->flightNo = fNo;         // Use 'this' pointer to assign values
        this->source = src;
        this->destination = dest;
        this->fare = f;
    }

    // Member function to display flight details using 'this' pointer
    void displayInfo() {
        cout << "Flight Information:" << endl;
        cout << "Flight Number: " << this->flightNo << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: $" << this->fare << endl;
    }
};

// Main function
int main() {
    int fNo;
    string src, dest;
    float f;

    // Input flight details from user
    cout << "Enter Flight Number: ";
    cin >> fNo;
    cin.ignore(); // Clear newline character from input buffer

    cout << "Enter Source: ";
    getline(cin, src);

    cout << "Enter Destination: ";
    getline(cin, dest);

    cout << "Enter Fare: ";
    cin >> f;

    // Create Flight object
    Flight flight(fNo, src, dest, f);

    // Display flight information
    flight.displayInfo();

    return 0;
}

