// set method
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{   
    int n=arr.size();
    set<int> distinct;
    vector<int> majority;
    int count;
    for(auto it:arr){
        distinct.insert(it);
    }
    
    for(auto i:distinct){
        count=0;
        for(auto j:arr ){
            if(j==i){
                count++;
            }
        }
        if (count > n / 3) {
          majority.push_back(i);
        }
    }
    return majority;
}
//  Boyer-Moore Voting Algorithm
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{   
    vector<int> result;

    if (arr.empty()) {
        return result;
    }

    int candidate1 = 0, candidate2 = 1;
    int count1 = 0, count2 = 0;
    int n = arr.size();

    // Step 1: Find potential candidates
    for (int num : arr) {
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = num;
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = num;
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Step 2: Check if the candidates occur more than n/3 times
    count1 = count2 = 0;

    for (int num : arr) {
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        }
    }

    if (count1 > n / 3) {
        result.push_back(candidate1);
    }

    if (count2 > n / 3) {
        result.push_back(candidate2);
    }

    return result;
}