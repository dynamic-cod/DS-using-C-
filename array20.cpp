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

    // Remove duplicates
    int newSize = n;
    for(int i = 0; i < newSize; i++) {               //outer loop: iterate through each element in the array
        for(int j = i+1; j < newSize; j++) {         //inner looop: check for duplicates of arr[i] in the rest of the arry
            if(arr[i] == arr[j]) {                   //if there is a duplicate found
                for(int k = j; k < newSize-1; k++)   //shift all elements to the left to overwrite the duplicate
                  arr[k] = arr[k+1];                 // move the element at k+1
                  newSize--;                         //reduce size of array after removing duplicate
                  j--;                               //stay on the same index to recheck the new value at arr[j]
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newSize; i++) 
      cout << arr[i] << " ";
    return 0;
}
