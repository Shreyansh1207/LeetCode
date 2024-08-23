class Solution {
public:
    int maxCoins(vector<int>& piles) {
    sort(piles.begin(),piles.end());
    int m=0;
    int n=piles.size();
    for(int i=n/3;i<n;i+=2){
        m+= piles[i];
    }
    return m;

    }
};