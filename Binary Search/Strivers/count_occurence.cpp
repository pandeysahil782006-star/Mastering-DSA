#include<bits/stdc++.h>
using namespace std;

int FindFirst(vector<int>& arr, int x){
    int first = -1;
    int low = 0, high = arr.size()-1;

    while(low<=high){
        int mid = low +(high-low)/2;

        if(arr[mid] == x){
            first = mid;
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else high = mid-1;
    }

    return first;
}

int Findlast(vector<int>& arr, int x){
    int last = -1;
    int low = 0, high = arr.size()-1;

    while(low<=high){
        int mid = low +(high-low)/2;

        if(arr[mid] == x){
            last = mid;
            low = mid+1;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else high = mid-1;
    }

    return last;
}

int countFreq(vector<int>& arr, int x){
    int first = FindFirst(arr, x);

    if(first == -1) return 0;

    int last = Findlast(arr, x);

    return (last-first)+1;
}

