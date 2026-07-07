// //print n to 1

#include<bits/stdc++.h>
using namespace std;

void printNto1(int n){
    //base case 
    if(n== 0) {
        return;
    }

    cout << n << " ";

    //recursive  call
    printNto1(n-1);
}

//main function
int main(){
    int n = 3;
    cout << "Printing N to 1:";
    printNto1(n);
    cout << endl;

    return 0;
}

