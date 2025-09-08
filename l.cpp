#include <iostream>
#include <string>
#include <climits> // INT_MAX, INT_MIN
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        // Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // Convert digits
        long result = 0;
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Check overflow
            if (result * sign >= INT_MAX) return INT_MAX;
            if (result * sign <= INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(result * sign);
    }
};

int main() {
    Solution sol;
    string s;
    getline(cin, s);  
    cout << sol.myAtoi(s) << endl;
    return 0;
}
