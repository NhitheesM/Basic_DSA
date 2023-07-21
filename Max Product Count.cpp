
// Max Product Count
#include <bits/stdc++.h> 

vector<long long> maxProductCount(vector<int> &arr, int n) {
    map<long long,int> productsCount;
    long long product;
    long long a;
    long long b;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ;j++){
            a=arr[i];
            b=arr[j];
            product=a*b;
            productsCount[product]+=1;
            
        }
    }
    int maxCount=0;
    long long maxProduct;
    for(auto &it: productsCount){
        if(maxCount<it.second){
            maxCount=it.second;
            maxProduct=it.first;
        }
    }
    long long frequency=(maxCount*(maxCount-1))/2;
    if (maxCount==1) return {0};
    return {maxProduct,frequency};
}