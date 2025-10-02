#include <iostream>
using namespace std;

int main() {
    int n, evenSum = 0, oddSum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) 
          evenSum += arr[i];  //adding even elements
        else 
          oddSum += arr[i];  //adding odd elements
    }

    cout << "Sum of even elements = " << evenSum << endl;
    cout << "Sum of odd elements = " << oddSum << endl;
    return 0;
}
