#include<bits/stdc++.h>
using namespace std;

int maxProduct(int n) {
        int largest = 0;
        int slargest = 0;

        while(n>0){
            int digit = n%10;

            if(digit>= largest){
               
                slargest = largest;
                largest = digit;
            
            }
            else if(digit > slargest){
                slargest = digit;
            }
            n= n/10;
        }
        return largest*slargest;

}