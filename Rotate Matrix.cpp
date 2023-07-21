// Normal method
#include <bits/stdc++.h> 
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) {
	
	vector<int>Output;
	int matOut[n][m];
	for(int j=0;j<m;j++){
        for (int i = 0; i < n; i++) {
        matOut[i][(j + k) % m] = mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			Output.push_back(matOut[i][j]);
		}
	}
	return Output;
}

 
 
// map method - 10/11 internal test case satisfied



