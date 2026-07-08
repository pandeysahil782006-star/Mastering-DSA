#include<bits/stdc++.h>
using namespace std;
// Single Parameter Approach
bool palindrome(int i, string &s, int n) {
    if (i >= n / 2) {
        return true;
    }
    if (s[i] != s[n - i - 1]) {
        return false; 
    }
    return palindrome(i + 1, s, n);
}

int main() {
    string s;
    cout << "Enter the string to check: ";
    cin >> s;

    int n = s.length();
    if (palindrome(0, s, n)) {
        cout << "Yes, it is a Palindrome" << endl;
    } else {
        cout << "No, it is not a Palindrome" << endl;
    }

    return 0;
}