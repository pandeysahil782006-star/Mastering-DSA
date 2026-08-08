#include<bits/stdc++.h>
using namespace std;

int tastiness(vector<int>& price, int diff, int k){
        int n = price.size();
        int candies = 1;
        int position = price[0];

        for(int i = 1; i<n;i++){
            if(price[i]- position>=diff){
                candies++;
                position =  price[i];
            }
            if(candies>=k){
               
                return true;
            }
        }
        return false;
    }

    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int n = price.size();
        int low = 1;
        int maxtasty = price[n-1] - price[0];
        int high = maxtasty;
        int ans = 0;

        while(low<=high){
            int mid = low+(high-low)/2;
            if(tastiness(price, mid, k)){
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
}