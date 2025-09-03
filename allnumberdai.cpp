#include <iostream>
#include <vector>
#include <cmath> // for abs()

using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Step 1: Mark visited numbers by making them negative
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    // Step 2: Collect numbers that were never marked
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            result.push_back(i + 1);
        }
    }

    // Step 3: Print missing numbers
    cout << "Missing numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
