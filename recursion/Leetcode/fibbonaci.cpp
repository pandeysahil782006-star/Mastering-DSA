#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    //base code
    if (n<=1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cout << "Enter a number for fibbonaci"<< endl;
    cin >> n;
    
    cout <<"The fibbonaci number at position " << n << " is " << fib(n) << endl;
    return 0;
}