#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) 
      cin >> arr[i];

    // Bubble sort descending
    for(int i = 0; i < n-1; i++) { //outer loop
        for(int j = 0; j < n-1-i; j++) {  //inner loop
            if(arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted array in descending order: ";
    for(int i = 0; i < n; i++) 
      cout << arr[i] << " ";
    return 0;
}
