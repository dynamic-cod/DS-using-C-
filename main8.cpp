// program to merge two sorted arrays inot another array in sorted order
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size of first sorted array
    cout << "Enter the size of first sorted array: ";
    cin >> n1;
    int arr1[n1];
	
    cout << "Enter " << n1 << " sorted elements:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
	// Input size of second sorted array
    cout << "Enter the size of second sorted array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter " << n2 << " sorted elements:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2];  // Resultant merged array
    int i = 0, j = 0, k = 0;

    // Merging the two sorted arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {  // ex: arr1[0] = 1, arr1[0] = 2;  1<2 ? store 1 in merged[0],
            merged[k++] = arr1[i++];  // loop will move to arr1[1] & arr2[0] for next comparison
        } else {
            merged[k++] = arr2[j++]; // ex;: arr1[1] = 4, arr2[0] = 2; 4 > 2 ? store 2 in merged[1]
        }							// loop will move to arr1[1] & arr2[1] for next comparison
    }

    // Copy remaining elements (if any)
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    // Output of merged sorted array
    cout << "\nMerged sorted array:\n";
    for (int x = 0; x < n1 + n2; x++) {
        cout << merged[x] << " ";
    }
    cout << endl;

    return 0;
}

