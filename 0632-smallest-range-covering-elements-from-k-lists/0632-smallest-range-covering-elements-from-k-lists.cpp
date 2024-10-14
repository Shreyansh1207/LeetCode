class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;
        
        int maxElement = INT_MIN;
        // Initialize the heap with the first element of each list
        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i][0], {i, 0}});
            maxElement = max(maxElement, nums[i][0]);
        }
        
        int rangeStart = 0, rangeEnd = INT_MAX;
        
        while (true) {
            auto [minElement, indices] = minHeap.top();
            minHeap.pop();
            int listIndex = indices.first;
            int elementIndex = indices.second;
            
            // Update the range if the current range is smaller
            if (maxElement - minElement < rangeEnd - rangeStart) {
                rangeStart = minElement;
                rangeEnd = maxElement;
            }
            
            // If we have reached the end of one of the lists, break the loop
            if (elementIndex + 1 == nums[listIndex].size()) {
                break;
            }
            
            // Add the next element from the same list to the heap
            int nextElement = nums[listIndex][elementIndex + 1];
            minHeap.push({nextElement, {listIndex, elementIndex + 1}});
            maxElement = max(maxElement, nextElement);
        }
        
        return {rangeStart, rangeEnd};
    
        
    }
};