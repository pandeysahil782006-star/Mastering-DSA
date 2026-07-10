#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter array  size:";
    cin >> n;

    int arr[n];
    cout << "Enter elements:";
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cout << "enter how many numbers you want to check:";
    cin >> q;

    while(q--){
        int number;
        cout << "Enter the number to check frequency:";
        cin >> number;

        cout << "frequency of "<< number<< " is " << mpp[number] << endl;
    }
    return 0;
}