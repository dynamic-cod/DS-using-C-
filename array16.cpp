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

    // Bubble sort
    for(int i = 0; i < n-1; i++) { //outer loop
        for(int j = 0; j < n-1-i; j++) {  //inner loop
            if(arr[j] > arr[j+1]) { //lets say arr[j]=5 & arr[j+1]=4, then
                int temp = arr[j]; // we will swap them with each other to change their places 5=temp
                arr[j] = arr[j+1]; //  arr[j]=arr[j+1]=5
                arr[j+1] = temp;    // temp=arr[j+1]=4
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for(int i = 0; i < n; i++) 
      cout << arr[i] << " ";
    return 0;
}
