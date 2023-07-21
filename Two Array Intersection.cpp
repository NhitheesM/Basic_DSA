// Two pointer method
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> vectorInt;
	int i=0;
	int j=0;
	while(i<n&&j<m){
		if(arr1[i]==arr2[j]){
			vectorInt.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return vectorInt ;
}

// set_intersection method -worst performance

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> vectorInt;
	set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),back_inserter(vectorInt));
	return vectorInt ;
}