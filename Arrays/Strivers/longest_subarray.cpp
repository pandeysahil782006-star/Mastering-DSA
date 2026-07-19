#include<bits/stdc++.h>
using namespace std;

int longestsubarray(vector<int>& nums, int k){
    unordered_map<long long, int> preSumMap;

    long long sum = 0;
    int maxlen = 0;

    for(int i = 0; i<nums.size(); i++){
        sum += nums[i];

        if(sum == k){
            maxlen = max(maxlen, i+1);
        }

        long long rem = sum -k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }

        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] =i;
        }
    }
    return maxlen;
}