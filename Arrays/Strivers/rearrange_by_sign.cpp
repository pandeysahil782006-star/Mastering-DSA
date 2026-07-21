#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums){
    int  n = nums.size();
    vector<int> pos, neg;

    for(int i = 0; i <n; i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    return nums;
}