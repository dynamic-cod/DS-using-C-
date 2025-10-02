#include <iostream>
using namespace std;

int main() {
    int n, pos = 0, neg = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] >= 0)
            pos++;
        else
            neg++;
    }

    cout << "Positive = " << pos << ", Negative = " << neg;
    return 0;
}
