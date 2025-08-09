#include<iostream>
using namespace std;

int main() {
    int arr[] = {0, 3, 8, 9, 5, 2};
    int size = 6;
    int st = 1;
    int end = size - 2;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            cout << "Peak found at index: " << mid << " (value: " << arr[mid] << ")";
            return 0;
        }
        else if (arr[mid] < arr[mid - 1]) {
            end = mid - 1;  
        }
        else {
            st = mid + 1;  
        }
    }

    cout << "No peak found";
}