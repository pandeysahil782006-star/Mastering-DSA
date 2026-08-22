#include<bits/stdc++.h>
using namespace std;

int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int low = nums[0];
        int high = nums[n-1];
        unordered_map<int,int> hash;
        for(auto it:nums){
            hash[it]++;
        }
        if(k==n){
            int ans = -1;
            for(int it:nums){
                ans = max(ans, it);
            }
            return ans;
        }

        if(k==1){
            int ans = -1;
            for(auto it: hash){
                if(it.second == 1){
                    ans = max(ans,it.first);
                }
               
            }
            return ans;
            
        }

        int ans = -1;
        if(hash[low] == 1){
            ans = max(ans, low);
        }
        if(hash[high] == 1){
            ans = max(ans, high);
        }
        return ans;
    }