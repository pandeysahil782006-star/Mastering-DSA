//find the second largest element in an array without sorting

#include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int>& arr){
    
    int n = arr.size();
    //base  case
    if(n<2) return -1;

    int largest = arr[0];
    int slargest = -1;

    for(int i =1; i<n; i++){
        if(arr[i]> largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]< largest && arr[i]> slargest){
            slargest = arr[i];

        }
    }
    return slargest;
}