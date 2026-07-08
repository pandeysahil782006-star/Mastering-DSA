#include<bits/stdc++.h>
using namespace std;

int sumfunctional(int n){
    //base case
    if (n==0){
        return 0;
    }
    //recursive case
    return n + sumfunctional(n-1);
}

int main(){
    int n = 3;
    int sum;
    sum = sumfunctional(n);
    cout << "The sum of numbers upto " << n << " is " << sum << endl;
    return 0;

}