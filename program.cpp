#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> freq;

    // Step 1: Count frequency
    for (char ch : s) {
        freq[ch]++;
    }

    // Step 2: Find first unique character
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s = "leetcode";
    cout << firstUniqChar(s);
    return 0;
}