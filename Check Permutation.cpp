// sorting method
#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){

    if(str1.size()!=str2.size()){
        return false;
    }
    string copy1=str1;
    string copy2=str2;
    sort(copy1.begin(),copy1.end());
    sort(copy2.begin(),copy2.end());
    return copy1==copy2;
}


// multiset method
#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    multiset<char> str1char;
    multiset<char> str2char;

    int n1=str1.size();
    int n2=str2.size();
    if(n1!=n2){
        return false;
    }
    for(int i=0;i<n1;i++){
        str1char.insert(str1[i]);
    }
    for(int i=0;i<n2;i++){
        str2char.insert(str2[i]);
    }
    if(str1char != str2char){
        return false;
    }
    return true;
}