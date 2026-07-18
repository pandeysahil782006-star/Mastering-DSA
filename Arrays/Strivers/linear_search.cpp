#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>& nums, int target) {
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            return i; // Element mil gaya, index return karo
        }
    }
    
    return -1; // Poore array me element nahi mila
}