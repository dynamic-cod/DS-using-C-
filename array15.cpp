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

    int first = arr[0];
    for(int i = 0; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = first; //after rotating to left by 1 pos the initial element will become the last element.

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) 
      cout << arr[i] << " ";
    return 0;
}
