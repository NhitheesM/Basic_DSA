// Normal - not efficient
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                        return "Yes";
                    }
                }
            }
        }
    }
    return "No";
}


// Using extra 2 pointers instead of 2 loops in above method
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0; i<n-3 ;i++){
        for(int j=i+1; j<n-2 ;j++){
            int left=j+1;
            int right=n-1;
            while(left<right){
                int sum=arr[i]+arr[j]+arr[left]+arr[right];
                if (sum == target) {
                    return "Yes";
                } else if (sum < target) {
                    left++;
                } else { // if sum>target
                right--;
                }
            }
        }
    }
    return "No";
}

