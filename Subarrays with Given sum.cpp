// map method - efficient 

int findAllSubarraysWithGivenSum(std::vector<int> &arr, int k) {
    int count=0;
    int totalsum=0;
    unordered_map<int,int>sumCount;

    for(int i=0;i<arr.size();i++){
        totalsum+=arr[i];
        if (totalsum == k) {
            count++;
        }
        int remSum =totalsum-k;
        if (sumCount.find(remSum) != sumCount.end()){
            count+=sumCount[remSum];
        }
        sumCount[totalsum]++;
    }
    return count;
}

// Normal 
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n=arr.size();
    vector<int> sumArray;
    int sum=0;
    sumArray.push_back(0);
    for(auto it:arr){
        sum+=it;
        sumArray.push_back(sum);
    }
    int count=0;
    for(int i=0 ;i<n ;i++){    //sumArray's length is n+1;
        for(int j=i+1 ; j<n+1 ;j++){
            if(sumArray[j]-sumArray[i]==k){
                count++;
            }
        }
    }
    return count;
}