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

    // Swap first and last
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;

    cout << "Array after swapping first and last: ";
    for(int i = 0; i < n; i++) 
      cout << arr[i] << " ";
    return 0;
}
