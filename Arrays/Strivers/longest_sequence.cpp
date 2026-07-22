#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n==0) return 0;

        int cnt = 0;
        int largest = 1;
        int lastSmaller = INT_MIN;

        for(int i = 0; i<n; i++){
            if(nums[i]-1 == lastSmaller){
                cnt += 1;
                lastSmaller = nums[i];
            }
            else if(nums[i] != lastSmaller){
                cnt = 1;
                lastSmaller = nums[i];
            }
            largest = max(cnt, largest);
        }
        return largest;
}