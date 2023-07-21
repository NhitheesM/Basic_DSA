
// Sorting and two-pointer - Efficient

#include <bits/stdc++.h> 
vector<int> findTriplets(vector<int> &arr, int n) 
{
    vector<int> elements;
    sort(arr.begin(),arr.end());
    
    for(int i=n-1;i>0;i--){
        int j=0;
        int k=i-1;

        while(j<k){
            if(arr[i]==arr[j]+arr[k]){
                elements.push_back(arr[i]);
                elements.push_back(arr[j]);
                elements.push_back(arr[k]);
                return elements;
            } else if (arr[i] > arr[j] + arr[k]) {
              j++;
            } else{             //if(arr[i]<arr[j]+arr[k])
                k--;
            }
        }
    }
    return elements;

}

// Normal method
#include <bits/stdc++.h> 
vector<int> findTriplets(vector<int> &arr, int n) 
{
    vector<int> elements;

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j] == arr[k]) || (arr[i]+arr[k] == arr[j])  || (arr[j]+arr[k] == arr[i])){
                    elements.push_back(arr[k]);
                    elements.push_back(arr[i]);
                    elements.push_back(arr[j]);
                    return elements;
                }
            }
        }
    }

    return elements;

}


