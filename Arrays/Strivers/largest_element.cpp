//largest element in an array

#include<bits/stdc++.h>
using namespace std;

int largestelement(vector<int>& arr){
    int n = arr.size();
    int largest = arr[0];
    int i;
    for ( i =1; i < n; i++){
        if(arr[i]> arr[0]){
            largest = arr[i];
        }
    }
    return largest;
}