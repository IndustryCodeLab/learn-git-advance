#include <iostream> 
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, maxLen = 1; // start index and max length

        for (int i = 0; i < s.length(); i++) {
            // Odd length palindrome
            int l = i, r = i;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                if (r - l + 1 > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }

            // Even length palindrome
            l = i, r = i + 1;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                if (r - l + 1 > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, maxLen);
    }
};

int main() {
    Solution sol;
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string ans = sol.longestPalindrome(str);
    cout << "Longest Palindromic Substring: " << ans << endl;

    return 0;
}
