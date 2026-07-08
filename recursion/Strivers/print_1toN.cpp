#include<bits/stdc++.h>
using namespace std;

void print1ToN(int n){

    if(n==0){
        return;
    }

    print1ToN(n-1);

    cout << n << " ";

}

int main(){
    int n = 5;
    cout << "Printing 1 to " << n << endl;
    print1ToN(n);
    cout << endl;
    return 0;
}