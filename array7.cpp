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

    int largest = arr[0], second = INT_MIN;  //smallest possible int value or we can use -1e9
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    cout << "Second largest = " << second;
    return 0;
}
