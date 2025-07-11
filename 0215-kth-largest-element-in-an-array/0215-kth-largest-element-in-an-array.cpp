class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int, vector<int>> minHeap;
        for (int num : nums) {
            minHeap.push(num);
        }
        for(int i=0;i<k-1;i++){
            minHeap.pop();
        }
        return minHeap.top();
    }
};