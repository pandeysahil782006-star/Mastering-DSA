#include<bits/stdc++.h>
using namespace std;

int productsum(int n){
    int sum = 0;
    int product = 1;

    while(n>0){
        int digits = n%10;
        sum += digits;
        product *= digits;

        n = n/10;
    }
    
    return product - sum;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The difference or product and sum of " << n << " IS " << productsum(n) << endl;

    return 0;
}
