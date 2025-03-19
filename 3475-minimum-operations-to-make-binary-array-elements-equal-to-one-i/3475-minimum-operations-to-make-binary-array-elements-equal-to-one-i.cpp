class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i=0;
        int cnt=0;
        while(i<nums.size()-2){
            if(nums[i]==1){
                i++;
            }
            else{
                cnt++;
                nums[i]=1;
                if(nums[i+1]==0){
                    nums[i+1]=1;
                }
                else{
                    nums[i+1]=0;
                }
                if(nums[i+2]==0){
                    nums[i+2]=1;
                }
                else{
                    nums[i+2]=0;
                }
                i++;
            }
        }
        if(nums[nums.size()-1]==0 || nums[nums.size()-2]==0){
            return -1;
        }
        return cnt;
        // int count=0;
        // for(int i=0;i<nums.size()-2;i++){
        //     if(nums[i]==1){
        //         continue;
        //     }
        //     else{
        //         nums[i]=1;
        //     }
        //     for(int j=i;j<i+3;j++){
        //         if(nums[j]==0){
        //             nums[j]=1;
        //         }
        //     }
        // }
    }
};