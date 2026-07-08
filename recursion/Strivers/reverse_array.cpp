#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int r, int l){
    if(l>=r){
        return;
    }

    swap(arr[l], arr[r]);

    reverse(arr, r-1, l+1);
}

int main(){
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter the " << n << " elements of array" << endl;
    for(int i = 0; i < n ; i++) cin >> arr[i];
    reverse(arr, n-1 , 0);

    for(int i = 0; i<n ; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}