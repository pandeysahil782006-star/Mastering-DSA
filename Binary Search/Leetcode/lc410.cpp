#include<bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int>nums, long long maxsum){
        int count = 1;
        long long sum = 0;

        for(int num : nums){
            if(num+sum<= maxsum){
                sum+=num;
            }
            else{
                count++;
                sum = num;
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);
        int ans = -1;

        while(low<=high){
            long long mid = low+(high-low)/2;
            if(countSubarrays(nums,mid)<=k){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }