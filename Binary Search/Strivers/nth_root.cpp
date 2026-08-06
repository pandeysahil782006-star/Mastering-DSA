#include<bits/stdc++.h>
using namespace std;

int func(int mid, int n, int m){
        long long ans = 1;
        for(int i =1; i<=n;i++){
            ans = ans*mid;
            if(ans>m) return 2;
            
        }
        if(ans==m) return 1;
        return 0;
        
        
}
    
    
    int nthRoot(int n, int m) {
        // Code here
        if(m==0) return 0;
        int low = 1,high = m;
        
        while(low<=high){
            int mid = low +(high-low)/2;
            int midval = func(mid, n, m);
            
            if(midval == 1){
                return mid;
            }
            else if(midval ==2){
                high = mid -1;
            }
            else {
                low = mid+1;
            }
           
        }
        return -1;
}