// program to find the frequency of a partucular number in a list of integers.
#include <iostream>
using namespace std;

int main() {
    int size, num, frequency = 0;

    // taking input for the size of array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // taking input(elements) for the array
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Number whose frequency we want
    cout << "Enter the number whose frequency you want to find: ";
    cin >> num;

    // Count frequency using loop
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            frequency++;
        }
    }

    // Output the result
    cout << "The number " << num << " appears " << frequency << " times in the array." << endl;

    return 0;
}

