#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 1};  

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1]) {
            right = mid;  
        } else {
            left = mid + 1;  
        }
    }

    cout << "Peak element index of: " << left << endl;
    cout << "Peak element value of: " << nums[left] << endl;

    return 0;
}
