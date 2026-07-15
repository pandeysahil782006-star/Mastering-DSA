#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    // Edge case: Agar array khaali hai
    if (nums.empty()) return 0;

    int i = 0; // Unique elements ko position dene waala pointer

    // j pointer pure array me scan karega
    for (int j = 1; j < nums.size(); j++) {
        // Agar naya element pichle unique element se alag hai
        if (nums[j] != nums[i]) {
            i++;             // Sahi seat par aage badho
            nums[i] = nums[j]; // Naye unique element ko wahan bitha do
        }
    }
    return i + 1;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    int k = removeDuplicates(nums);

    cout << "Unique elements ka count: " << k << endl;
    cout << "Modified array (sirf unique tak): ";
    for (int index = 0; index < k; index++) {
        cout << nums[index] << " ";
    }
    cout << endl;

    return 0;
}