class Solution {
public:
//     int minStoneSum(vector<int>& piles, int k) {
//         int n=piles.size();
//         vector<int>freq(1001,0);
//         int i;
//         for(i=0;i<n;i++){
//             freq[piles[i]]++;
//         }
//         for(i=10000;i>0&&k>0;i--){
//             while(freq[i]>0 && k>0){
//                 freq[i]--;
//                 freq[(i+1)/2]++;
//                 k--;
//             }
//         }
//         int sum=0;
//         for(i=0;i<=10000;i++){
//             if(freq[i]>0){
//                 sum=sum+(freq[i]*i);
//             }
//         }
//         return sum;
//     }
// };
int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        vector<int> freq(10001);
        for(int i=0;i<n;i++){
            freq[piles[i]]++;
        }
        for(int i=10000;i>0&&k>0;i--){
            while(freq[i]>0 && k>0){
                freq[i]--;
                freq[(i+1)/2]++;
                k--;
            }
        }
        int sum=0;
        for(int i=0;i<=10000;i++){
            if(freq[i]>0){
                sum=sum+freq[i]*i;
            }
        }
        return sum;
    }
};