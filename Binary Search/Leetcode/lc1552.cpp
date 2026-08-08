#include<bits/stdc++.h>
using namespace std;

bool CanwePlace(vector<int>& position, int dist, int m){
        int n = position.size();
        int balls = 1;
        int index = position[0];
        
        for(int i = 1;i<n;i++){
            if(position[i]-index >= dist){
                balls++;
                index = position[i];
            }
            if(balls>=m) return true;
        }
        return false;

    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int low = 1;

        int maxdist = position[n-1]-position[0];
        int high = maxdist;
        int ans = 1;

        while(low<=high){
            int mid = low + (high - low)/2;
            if(CanwePlace(position, mid, m)){
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
}