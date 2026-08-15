#include<bits/stdc++.h>
using namespace std;

int findMaxRowIndex(vector<vector<int>>& mat, int n, int col) {
        int maxVal = -1;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxVal) {
                maxVal = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int maxRow = findMaxRowIndex(mat, n, mid);

            int left = (mid - 1 >= 0) ? mat[maxRow][mid - 1] : -1;
            int right = (mid + 1 < m) ? mat[maxRow][mid + 1] : -1;

            if (mat[maxRow][mid] > left && mat[maxRow][mid] > right) {
                return {maxRow, mid};
            } else if (left > mat[maxRow][mid]) {
                high = mid - 1; 
            } else {
                low = mid + 1; 
            }
        }

        return {-1, -1};
}