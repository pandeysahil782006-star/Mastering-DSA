#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>& bloomDay, int m, int k, int day ){
        int bouquets = 0;
        int n = bloomDay.size();
        int cnt = 0;
        for(int i = 0; i<n;i++){
            if(bloomDay[i]<= day){
                cnt++;
            }
            else{
                bouquets += cnt/k;
                cnt = 0;
            }
        }
        bouquets +=(cnt/k);
        return bouquets >=m;

    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k>n) return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = high;

        while(low<=high){
            int mid = low +(high-low)/2;
            if(possible(bloomDay, m, k, mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low= mid+1;
            }
          
        }
        return ans;
}