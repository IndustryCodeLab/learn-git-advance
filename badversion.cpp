#include <iostream>
using namespace std;


bool isBadVersion(int version) {
    int firstBad = 4; 
    return version >= firstBad;
}

int main() {
    int n;
    cout << "Enter number of versions: ";
    cin >> n;

    int left = 1, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (isBadVersion(mid)) {
            right = mid;  
        } else {
            left = mid + 1;  
        }
    }

    cout << "First bad version is: " << left << endl;

    return 0;
}
