//
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 9, 4, 5};
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int largestIndex = -1;
    int smallestIndex = -1;

    for(int i = 0; i < 5; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largestIndex = i;
        }
    }

    for(int i = 0; i < 5; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
        
    }
    cout << "Largest element is: " << largest << endl;
    cout << "Index of largest element: " << largestIndex << endl;

    cout << "Smallest element is: " << smallest << endl;
    cout << "Index of smallest element: " << smallestIndex << endl;
    return 0;
}