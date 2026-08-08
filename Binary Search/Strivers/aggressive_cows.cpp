#include<bits/stdc++.h>
using namespace std;


int CanwePlace(vector<int>&arr, int dist, int k){
        int cows = 1;
        int position = arr[0];
        int n = arr.size();
        
        for(int i = 1; i<n;i++){
            if(arr[i] - position >= dist){
                cows++;
                position = arr[i];
            }
            if(cows>=k) return true;
        }
        return false;
    }
    
    
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int maxdist = arr[n-1]-arr[0];
        
        int low = 1;
        
        int high = maxdist;
        int ans = 1;
        
        while(low<=high){
            int mid = low +(high-low)/2;
            if(CanwePlace(arr, mid, k)){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }