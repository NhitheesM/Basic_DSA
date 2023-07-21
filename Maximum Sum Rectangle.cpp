// 
#include <bits/stdc++.h> 
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{	int maxSum=INT_MIN;
	//int left;  (To Obtain Boundaries  of the resultant Matrix
	//int top;          remove // from all lines)
	//int maxLeft;
	//int maxRight;
	//int maxTop;
	//int maxDown;
    for (int i = 0; i <m; i++) {
        vector<int> temp(n, 0);
		//left=i;
		for(int j=i ;j<m ;j++){
		
			for(int k=0 ; k<n ; k++){
				temp[k]+=arr[k][j];
			}
			int tempSum=0;
			for(int l=0 ; l<n ;l++){
				tempSum+=temp[l];

				if(maxSum<tempSum){
					maxSum=tempSum;
					//maxLeft=left;
					//maxRight=j;
					//maxTop=top;
					//maxDown=i;

				}
                if (tempSum < 0){
                	tempSum = 0;
					//top=l+1;

                }
            }
		}
    }
	return maxSum;
}





