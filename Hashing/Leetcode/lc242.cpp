#include<bits/stdc++.h>
using namespace std;

int isAnagram(string s, string t){

    //base case
    if(s.size() != t.size()){
        return false;
    }

    //for string s
    int hash1[26] = {0};
    for(int i = 0; i<s.size(); i++){
        hash1[s[i] -'a']++;
    }

    //for string t
    int hash2[26] = {0};
    for(int j = 0; j<t.size(); j++){
        hash2[s[j] -'a']++;
    }

    //comparison
    for(int i = 0; i<26; i++){
        if (hash1[s[i]] != hash2[s[i]]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "anagram", t = "nagaram";
    
    if (isAnagram(s, t)) {
        cout << "Yes, it is a Valid Anagram!" << endl;
    } else {
        cout << "No, not an Anagram!" << endl;
    }

    return 0;
}

