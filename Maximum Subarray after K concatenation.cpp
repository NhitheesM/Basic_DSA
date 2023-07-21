#include <bits/stdc++.h> 
long long maxSubSumKConcat(vector<int> &arr, int n, int k){
    
    int kn = k*n;
    int maxSum=INT_MIN;
    int tempSum=0;
    for(int i=0 ; i<kn ; i++ ){
        tempSum+=arr[i%n];
        maxSum = max(maxSum,tempSum);
        if(tempSum<0){
            tempSum=0;
        }
    }
    return maxSum;
}

