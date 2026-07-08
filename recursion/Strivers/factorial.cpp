#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    
    return n*fact(n-1);

}

int main(){
    int n,  ans;
    cout << "enter the number:";
    cin >> n;
    ans = fact(n);
    cout << "the factorial of " << n <<" is " << ans << endl;
    return 0;

}