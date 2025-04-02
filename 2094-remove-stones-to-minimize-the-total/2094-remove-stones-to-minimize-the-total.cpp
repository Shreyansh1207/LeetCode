class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        priority_queue<int>pq;
        for(auto it:piles){
            pq.push(it);
        }
        while(k>0){
            int maxE=pq.top();
            pq.pop();
            maxE=maxE-floor(maxE/2);
            pq.push(maxE);
            k--;
        }
        int sum=0;
        while(!pq.empty()){
            sum=sum+pq.top();
            pq.pop();
        }
        return sum;
    }
};