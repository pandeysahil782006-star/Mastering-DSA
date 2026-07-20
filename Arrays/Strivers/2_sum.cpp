#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& book, int target) {
    int n = book.size();
    
    vector<pair<int, int>> bookWithIndex;
    
    for (int i = 0; i < n; i++) {
        bookWithIndex.push_back({book[i], i});
    }
    
    sort(bookWithIndex.begin(), bookWithIndex.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = bookWithIndex[left].first + bookWithIndex[right].first; 
        
        if (sum == target) {
            return {bookWithIndex[left].second, bookWithIndex[right].second};
        }
        else if (sum < target) {
            left++; 
        }
        else {
            right--; 
        }
    }
    
    return {}; 
}