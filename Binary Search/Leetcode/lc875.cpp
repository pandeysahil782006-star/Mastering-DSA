#include<bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        
        int high = 0;
        for (int b : piles) high = max(high, b);

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2; 
            long long totalHours = 0;
            for (int bananas : piles) {
                totalHours += (bananas + mid - 1) / mid;
            }
            if (totalHours <= h) {
                ans = mid;      
                high = mid - 1;  
            } 
            else {
                low = mid + 1;  
            }
        }

        return ans;
}
