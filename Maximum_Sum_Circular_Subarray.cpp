// Kadanes algorithm modification for circular subarray 
// find array sum and minimum sum and the difference is maximum sum 
// in other cases Max_sum is the maximum value

#include<bits/stdc++.h>
int maxSubarraySum(vector<int> &arr, int n) {
	int arr_sum=0;
	int Max_sum=INT_MIN;
	int Min_sum=INT_MAX;
	int temp_max_sum=0;
	int temp_min_sum=0;

	for(int i=0 ; i<n ; i++){
		arr_sum+=arr[i];
		temp_max_sum+=arr[i];
		temp_min_sum+=arr[i];
		if(temp_max_sum>Max_sum){
			Max_sum=temp_max_sum;
		}
		if(Min_sum>temp_min_sum){
			Min_sum=temp_min_sum;
		}
		if(temp_max_sum<0){
			temp_max_sum=0;
		}
		if(temp_min_sum>0){
			temp_min_sum=0;
		}
	}
	if(arr_sum==Min_sum){
		return Max_sum;
	}
	else{
		return max(Max_sum,arr_sum-Min_sum);
	}
}










	

