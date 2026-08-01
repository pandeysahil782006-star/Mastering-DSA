#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = arr.size(); // Default case agar koi element >= target na mile

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;        // Candidate answer ho sakta hai
            high = mid - 1;   // Aur chhota/pehle wala index dhoondho
        } else {
            low = mid + 1;    // Target se chhota hai, right jao
        }
    }
    return ans;
}