#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0]; //assuming the first element as the smallest
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Smallest element = " << smallest;
    return 0;
}
