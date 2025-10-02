#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average = " << sum / n;
    return 0;
}
