#include<bits/stdc++.h>
using namespace std;

vector<int> findUnionOptimal(vector<int>& arr1, vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    vector<int> unionArr;
    
    // Jab tak dono arrays me elements hain
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            // Duplicate check
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else {
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    // Agar arr1 me kuch elements bach gaye hain (jaise upar wale case me nahi bacha tha)
    while(i < n1) {
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    
    // Agar arr2 me kuch elements bach gaye hain
    while(j < n2) {
        if(unionArr.size() == 0 || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    
    return unionArr;
}