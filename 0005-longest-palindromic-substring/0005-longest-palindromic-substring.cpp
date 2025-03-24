#include<bits/stdc++.h>
class Solution {
public:
    bool solve(string &s,int i,int j){
        if(i>=j){
            return true;
        }
        if(s[i]==s[j]){
            return solve(s,i+1,j-1);
        }
        return false;
    }
    string longestPalindrome(string s) {
        int m=INT_MIN;
        int si=-1;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(solve(s,i,j)==true){
                    if(j-i+1>m){
                    m=j-i+1;
                    si=i;
                    }  
                }
            }
        }
        return s.substr(si,m);
    }
};