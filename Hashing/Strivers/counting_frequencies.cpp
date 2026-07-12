#include<bits/stdc++.h>
using namespace std;

void countFreq(vector<int>&arr){
    //create map
    unordered_map<int,int> mpp;

    for (int i = 0; i < arr.size(); i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        cout << it.first << " occurs " << it.second << " times." << endl;
    }
}

int main() {
    vector<int> arr = {10, 20, 20, 10, 10, 30};
    
    cout << "--- Frequency Count ---" << endl;
    countFreq(arr);

    return 0;

}