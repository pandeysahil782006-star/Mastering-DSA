#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>&arr, int  n){
    //outer loop
    for(int i=0; i <=n-2; i++){
        int min = i;
        //inner loop
        for(int j=i; j<= n-1; j++){
            if(arr[j]< arr[min]){
                min = j;       //new smallest number
            }
        }
        swap(arr[min], arr[i]);    
    }
}

int main(){
    vector<int> arr = {29,24,45,23,45,23,54};
    int n = arr.size();
    cout << "Original array:";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
        cout << endl;
    }
    selectionsort(arr, n);

    cout << "Sorted array:";
    for(int i = 0;i<n; i++){
        cout << arr[i] << " ";

    }
    return 0;
}