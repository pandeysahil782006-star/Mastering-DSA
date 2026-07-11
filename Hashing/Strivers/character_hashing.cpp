#include<bits/stdc++.h>
using namespace std;

int main(){
    //create a string to take input
    string s;
    cout << "Enter the string(in lower case)";
    cin >> s;

    // create has array
    int hash[26]= {0};
    for(int i = 0; i< s.size();i++){
        int index = s[i]- 'a';
        hash[index]++;
    }

    //take the number of queries
    int q;
    cout << "Enter the number of queries you want:";
    cin >> q;

    //input the  character
    while(q--){
        char c;
        cout << "Enter the characters to search:";
        cin >> c;

        //to find exact index of character
        int index = c - 'a';

        cout << c << "appears " << hash[index] << " times" << endl;

    }
    return 0;
}