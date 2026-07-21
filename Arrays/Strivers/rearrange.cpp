//if positive and negative are not in  equal number

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArrayVariety2(vector<int>& nums) {
    int n = nums.size();
    vector<int> pos, neg;
    
    // Step 1: Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) pos.push_back(nums[i]);
        else neg.push_back(nums[i]);
    }
    
    // Step 2: If Positives are more than Negatives
    if (pos.size() > neg.size()) {
       
        for (int i = 0; i < neg.size(); i++) {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        
        // Fill remaining positive elements at the end
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++) {
            nums[index] = pos[i];
            index++;
        }
    } 
    // Step 3: If Negatives are more than Positives
    else {
        for (int i = 0; i < pos.size(); i++) {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        
        // Fill remaining negative elements at the end
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++) {
            nums[index] = neg[i];
            index++;
        }
    }
    
    return nums;
}