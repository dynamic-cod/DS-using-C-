#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Reverse the array
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    /*we can use function also:
void revArr(int arr[], int size){
int start =0, end = size-1;
while(start =< end){
swap(arr[start], arr[end]);
start++;
end++;
}
} 
*/

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
