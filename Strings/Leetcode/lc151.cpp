#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        string ans = "";
        int i = s.size()-1;

        while(i>=0){
            while(i>=0 && s[i]==' ') i--;
            if(i<0) break;
        

        int j = i;
        while(i>=0 && s[i]!=' ') i--;
        string word = s.substr(i+1, j-i);

        if(ans.empty()) ans += word;
        else ans+= " " + word;
        }
        return ans;
}