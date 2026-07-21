#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        
        // Last element is always a leader
        int maxFromRight = arr[n - 1];
        ans.push_back(maxFromRight);
        
        // Traverse from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                ans.push_back(arr[i]);
                maxFromRight = arr[i]; // Update the max element
            }
        }
        
        // Question me order maintain karne bole (left-to-right), toh reverse kar do
        reverse(ans.begin(), ans.end());
        
        return ans;
}