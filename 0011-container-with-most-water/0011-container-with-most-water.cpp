#include<bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        long long maxiArea=0;
        long long area;
        while(i<j){
            area=(long long)(j-i) * min(height[i],height[j]);
            maxiArea=max(maxiArea,area);
           if(height[i]<height[j]){
                i++;
           }
           else{
            j--;
           }
        }
        return (int)maxiArea;

    }
};