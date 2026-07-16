//return second largest and second smallest

// Helper 1: Jo sirf Second Largest nikalega
#include<bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int>& arr, int n) {
    int largest = arr[0], sLargest = INT_MIN;
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) { sLargest = largest; largest = arr[i]; }
        else if(arr[i] < largest && arr[i] > sLargest) { sLargest = arr[i]; }
    }
    return sLargest;
}

// Helper 2: Jo sirf Second Smallest nikalega
int getSecondSmallest(vector<int>& arr, int n) {
    int smallest = arr[0], sSmallest = INT_MAX;
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) { sSmallest = smallest; smallest = arr[i]; }
        else if(arr[i] > smallest && arr[i] < sSmallest) { sSmallest = arr[i]; }
    }
    return sSmallest;
}

// Main Function:
vector<int> getSecondOrderElements(int n, vector<int> &a) {      // this is a vector function which return {slargest, ssmallest}
    int sLargest = getSecondLargest(a, n);
    int sSmallest = getSecondSmallest(a, n);
    
    return {sLargest, sSmallest}; // Dono ko mila kar ek saath return kar diya!
}