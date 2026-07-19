#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }

    unordered_set<int> freqSet;
    for (auto pair : countMap) {
        freqSet.insert(pair.second);
    }

    return countMap.size() == freqSet.size();
}


//or

// bool uniqueOccurrences(vector<int>& arr) {
//     // Step 1: Puraane style se map me frequency count karo
//     unordered_map<int, int> mpp;
//     for(int i = 0; i < arr.size(); i++) {
//         mpp[arr[i]]++;
//     }
    
//     // Step 2: Saari frequencies ko ek vector me daal lo
//     vector<int> counts;
//     for(auto it = mpp.begin(); it != mpp.end(); it++) {
//         counts.push_back(it->second); // it->second yaani frequency
//     }
    
//     // Step 3: Vector ko sort karo taaki duplicate barabar me aa jayein
//     sort(counts.begin(), counts.end());
    
//     // Step 4: Check karo kya koi do lagatar frequencies same hain?
//     for(int i = 0; i < counts.size() - 1; i++) {
//         if(counts[i] == counts[i+1]) {
//             return false; // Agar same mil gayi toh unique nahi hai!
//         }
//     }
    
//     return true; // Agar loop poora chal gaya bina return kiye, toh sab unique hain
// }