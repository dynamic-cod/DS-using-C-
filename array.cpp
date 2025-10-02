
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Input 5 integers
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Display integers
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
