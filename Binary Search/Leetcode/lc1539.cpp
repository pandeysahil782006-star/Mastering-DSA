#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        
        for(int i =0;i<n;i++){
            if(arr[i]<=k){
                k++;
            }
            else{
                break;
            }
            
        }
        return k;
}

//method 2
int findKthPositive(vector<int>& arr, int k) {
       unordered_set<int> st(arr.begin(), arr.end());
        int missingCount = 0;

        for (int num = 1; num <= 2000; num++) { 
            if (st.find(num) == st.end()) {
                missingCount++;
                if (missingCount == k) {
                    return num;
                }
            }
        }
        return -1;
}

//optimal
int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n-1;

        while(low<=high){
            int mid = low +(high-low)/2;
            int missing = arr[mid] -(mid+1);

            if(missing<k){
                low = mid+1;
            }
            else high = mid-1;

        }
        return low+k;
    
}