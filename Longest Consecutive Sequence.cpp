// sort and check

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
   
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int maxLen=1;
        int cnt=0;
        int lastsmallest=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]==lastsmallest+1){
                cnt+=1;
                lastsmallest=nums[i];
            }
            else if(nums[i]!=lastsmallest){    //if numbers repeat ,we should neglect it
                cnt=1;
                lastsmallest=nums[i];
            }
            maxLen=max(maxLen,cnt);
        }
       return maxLen;

}




// unordered set method
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    std::unordered_set<int> numSet;
    for (int num : arr) {
        numSet.insert(num);
    }

    int maxLen = 0;

    for (int num : arr) {
        if (numSet.find(num - 1) == numSet.end()) {  // Check if num is the starting number of a sequence
            int currentLen = 1;
            int currentNum = num + 1;
            while (numSet.find(currentNum) != numSet.end()) {  // Check for consecutive numbers
                currentLen++;
                currentNum++;
            }
            maxLen = std::max(maxLen, currentLen);
        }
    }

    return maxLen;
}

