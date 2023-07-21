// Brute force - O(n^4)
#include <vector>

using namespace std;

vector<vector<int>> sumOfKxKMatrices(vector<vector<int>>& arr, int k) {
    int n = arr.size();
    vector<vector<int>> result(n - k + 1, vector<int>(n - k + 1, 0));

    // Calculate sum of sub-squares
    for (int i = 0; i <= n - k; i++) {
        for (int j = 0; j <= n - k; j++) {
            for (int x = i; x < i + k; x++) {
                for (int y = j; y < j + k; y++) {
                    result[i][j] += arr[x][y];
                }
            }
        }
    }

    return result;
}

//Efficient and Simple method- O(k*n*m)

#include <bits/stdc++.h>
vector<vector<int>> sumOfKxKMatrices(vector<vector<int>>& arr, int k) {
    int n = arr.size();
    int m = arr[0].size(); // Use m if it is not a square matrix

    vector<vector<int>> ans(n - k + 1, vector<int>(m - k + 1, 0));

    // Calculate the cumulative sum for each row
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            arr[i][j] += arr[i][j - 1];
        }
    }

    // Calculate the sum of each submatrix
    for (int i = 0; i < n - k + 1; i++) {
        for (int j = 0; j < m - k + 1; j++) {
            int sum = 0;

            // Calculate the sum using cumulative sum technique
            for (int p = i; p < i + k; p++) {
                sum += arr[p][j + k - 1] - (j > 0 ? arr[p][j - 1] : 0);
            }

            ans[i][j] = sum;
        }
    }

    return ans;
}





