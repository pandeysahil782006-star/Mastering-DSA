#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp; // Elements ko temporarily sort karke rakhne ke liye extra vector
        
        int left = low;      // Left half ka pointer (low se lekar mid tak chalega)
        int right = mid + 1; // Right half ka pointer (mid + 1 se lekar high tak chalega)

        // Step A: Jab tak dono halves me elements bache hain, compare karte jao
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]); // Agar left chhota hai, toh use temp me daalo
                left++;                    // Left pointer ko aage badhao
            } else {
                temp.push_back(arr[right]); // Agar right chhota hai, toh use temp me daalo
                right++;                    // Right pointer ko aage badhao
            }
        }

        // Step B: Agar left half me abhi bhi elements bach gaye hain, toh unhe direct daal do
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Step C: Agar right half me elements bach gaye hain, toh unhe direct daal do
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Step D: Temp vector me saare elements sort ho chuke hain, ab unhe asli array me wapas copy karo
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low]; // temp humesha 0 index se shuru hota hai, isliye (i - low) kiya
        }
    }

    void mergeSort(vector<int>& arr, int low, int high) {
       
        if (low >= high) return;
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n - 1); 
        return nums;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {4, 2, 1, 3, 5};
    
    cout << "Before Sorting: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    obj.sortArray(arr);

    cout << "After Merge Sort: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}