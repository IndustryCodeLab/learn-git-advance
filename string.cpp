#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;   

    vector<int> freq(26, 0);

   
    for (char c : s) {
        freq[c - 'a']++;
    }

    string vowels = "aeiou";
    int maxVowel = 0, maxConsonant = 0;

   
    for (int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        if (freq[i] > 0) {
            if (vowels.find(ch) != string::npos) {
                maxVowel = max(maxVowel, freq[i]);
            } else {
                maxConsonant = max(maxConsonant, freq[i]);
            }
        }
    }

    cout << (maxVowel + maxConsonant) << endl;

    return 0;
}
