class Solution {
    public int sumCounts(List<Integer> nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                Map<Integer,Integer>m=new HashMap<>();
                for(int k=i;k<=j;k++){
                   m.put(nums.get(k),m.getOrDefault(nums.get(k), 0) + 1);
                }
                ans+=m.size()*m.size();
            }
        }
        return ans;
    }
}