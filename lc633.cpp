#include<bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c); // Max possible value for b
        
        while (left <= right) {
            long long current_sum = left * left + right * right;
            
            if (current_sum == c) {
                return true;
            } else if (current_sum < c) {
                left++; // Sum chota hai, value badhao
            } else {
                right--; // Sum bada hai, value ghatao
            }
        }
        return false;
}