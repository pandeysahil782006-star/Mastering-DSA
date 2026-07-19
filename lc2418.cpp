#include<bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    map<int, string, greater<int>> mpp;
    
    for (int i = 0; i < heights.size(); i++) {
        mpp[heights[i]] = names[i];
    }
    
    vector<string> result;
    
    for (auto pair : mpp) {
        result.push_back(pair.second);
    }
    
    return result;
    }