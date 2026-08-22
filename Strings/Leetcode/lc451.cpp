#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        vector<pair<int, char>> vec;
        for (auto it : freq) {
            vec.push_back({it.second, it.first});
        }
        sort(vec.begin(), vec.end(), greater<pair<int, char>>());

        // Step 4: String build karo
        string ans = "";
        for (auto p : vec) {
            int count = p.first;
            char ch = p.second;
            ans += string(count, ch);
        }

        return ans;
}