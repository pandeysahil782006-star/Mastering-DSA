#include<bits/stdc++.h>
using namespace std;


//better
vector<int> findMissingRepeating_Better(vector<int>& arr) {
    int n = arr.size();
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) repeating = i;
        else if (freq[i] == 0) missing = i;
    }

    return {repeating, missing};
}

//optimal-method1
vector<int> findMissingRepeating_OptimalMath(vector<int>& arr) {

    long long n = arr.size();

    // Sum of first N natural numbers and N squares
    long long Sn = (n * (n + 1)) / 2;
    long long S2n = (n * (n + 1) * (2 * n + 1)) / 6;

    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }

    // val1 = X - Y
    long long val1 = S - Sn;

    // val2 = X + Y
    long long val2 = (S2 - S2n) / val1;

    // X = (val1 + val2) / 2
    long long X = (val1 + val2) / 2;
    long long Y = X - val1;

    return {(int)X, (int)Y};
}

//optimal -mehotd 2(XOR)
vector<int> findMissingRepeating_XOR(vector<int>& arr) {
    int n = arr.size();
    int xr = 0;

    //Find XOR of all array elements and 1 to N
    for (int i = 0; i < n; i++) {
        xr = xr ^ arr[i];
        xr = xr ^ (i + 1);
    }

    // Find the rightmost set bit (differentiating bit)
    int bitNo = xr & ~(xr - 1);

    // Group elements into two buckets
    int zero = 0;
    int one = 0;

    for (int i = 0; i < n; i++) {
        // Part of array elements
        if ((arr[i] & bitNo) != 0) {
            one = one ^ arr[i];
        } else {
            zero = zero ^ arr[i];
        }

        // Part of 1 to N numbers
        if (((i + 1) & bitNo) != 0) {
            one = one ^ (i + 1);
        } else {
            zero = zero ^ (i + 1);
        }
    }

    //Identify which one is repeating
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == zero) count++;
    }

    if (count == 2) return {zero, one}; 
    return {one, zero};                
}