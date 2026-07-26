#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;         // Pointer for valid elements in nums1
        int p2 = n - 1;         // Pointer for nums2 elements
        int i = m + n - 1;      // Placement pointer at end of nums1

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[i] = nums1[p1];
                p1--;
            } else {
                nums1[i] = nums2[p2];
                p2--;
            }
            i--;
        }

        // If elements remain in nums2, copy them over
        while (p2 >= 0) {
            nums1[i] = nums2[p2];
            p2--;
            i--;
        }
}