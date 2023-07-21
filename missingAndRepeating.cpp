// Normal 

#include <bits/stdc++.h>

using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {
    int repeat;
    int missing;
    int nextnum = 1;
	int totalsum=0;

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n-1; i++) {
		totalsum+=arr[i];
		if(arr[i]==arr[i+1]){
			repeat=arr[i];
		}
    }
	totalsum+=arr[n-1];
    missing=(n*(n+1)/2)-totalsum+repeat;
    return {missing, repeat};
}


// Map method
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{	int repeat;
	int missing;
	map<int,int> countMap;
    for (int i = 1; i <= n; i++) {
        countMap[i] = 0;
    }
	for(int i=0 ; i<n ; i++){
		countMap[arr[i]]+=1;
	}
	for(auto it:countMap){
		if (it.second==0){
			missing=it.first;
		}
		if (it.second==2){
			repeat=it.first;
		}
	}
	return {missing,repeat};
	
}
