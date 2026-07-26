#include<bits/stdc++.h>

using namespace std;

//better
int subarraysWithXorK_Better(vector<int> a, int k) {
    int n = a.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        int current_xor = 0;
        for (int j = i; j < n; j++) {
            current_xor = current_xor ^ a[j];
            
            if (current_xor == k) {
                count++;
            }
        }
    }
    return count;
}