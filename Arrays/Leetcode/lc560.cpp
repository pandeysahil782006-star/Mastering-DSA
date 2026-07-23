#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int preSum = 0;

        unordered_map<int, int>mpp;
        mpp[0] = 1;
        for(int i = 0; i<n; i++){
            preSum += nums[i];
            int remove = preSum -k;
            if(mpp.find(remove) != mpp.end()){
                cnt = cnt + mpp[remove];

            }
            mpp[preSum]++;
        }
        return cnt;
}