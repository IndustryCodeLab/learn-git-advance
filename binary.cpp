#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // overflow safe

        if (arr[mid] == target) return mid;      // target found
        else if (arr[mid] < target) left = mid + 1; // search right half
        else right = mid - 1;                       // search left half
    }

    return -1; // not found
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    int result = binarySearch(arr, target);
    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
