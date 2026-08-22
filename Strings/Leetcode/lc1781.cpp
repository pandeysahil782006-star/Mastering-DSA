#include<bits/stdc++.h>
using namespace std;
int beautySum(string s) {
        int n = s.length();
        int totalbeauty = 0;

        for(int i =0; i<n;i++){
            int freq[26]= {0};
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maximum = 0;
                int minimum = INT_MAX;
                for(int k =0;k<26;k++){
                    if(freq[k]>0){
                        maximum = max(maximum, freq[k]);
                        minimum = min(minimum, freq[k]);
                    }
                }
                totalbeauty +=maximum-minimum;
            }
           
        }
        return totalbeauty;
}