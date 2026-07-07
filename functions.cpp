#include<bits/stdc++.h>
using namespace std;

//function declare
int doublegame(int x){
    return x*2;
}

int main(){
    for(int i = 1; i<=5;i++){
        cout << "Double of " << i << "is" << doublegame(i)<< endl;
    }
    return 0;
}
