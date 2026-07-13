#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&arr, int n){

    for(int i = n-1; i>=1; i--){
        int didswap = 0;
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                int didswap =1;
            }
        }
        if(didswap == 0){
                break;
        }
    }
}
int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();
    bubblesort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}