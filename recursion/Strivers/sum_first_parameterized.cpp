#include<bits/stdc++.h>
using namespace std;

void sumparameter(int n , int sum){

    if(n == 0){
        cout << "Sum is " << sum << endl;

    }
    sumparameter(n-1, sum +n);
}

int main(){
    int n = 6;
    sumparameter(n,0);

    return 0;
}