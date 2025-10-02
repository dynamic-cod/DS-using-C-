#include <iostream>
using namespace std;

int main() {
    int n, num, count = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter number to count: ";
    cin >> num;

    for(int i = 0; i < n; i++) { //loop to increse the count in number is found
        if(arr[i] == num)
            count++;
    }

    cout << num << " occurs " << count << " times.";
    return 0;
}
