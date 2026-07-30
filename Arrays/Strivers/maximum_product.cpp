#include<bits/stdc++.h>
using namespace std;

// better

int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;

        int n = nums.size();
        for(int i = 0; i<n; i++){
            int product = 1;
            for( int j=i; j<n; j++){
                product = product*nums[j];

                maxi = max(maxi,product);
            }
        }
        return maxi;
}

//optimal
int maxProduct(vector<int>& nums) {
        int n = nums.size();
    
        int prefix = 1;
        int suffix = 1;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;

            prefix *= nums[i];           
            suffix *= nums[n - i - 1];   

            maxi = max(maxi, max(prefix, suffix)); 
        }

        return maxi;
}