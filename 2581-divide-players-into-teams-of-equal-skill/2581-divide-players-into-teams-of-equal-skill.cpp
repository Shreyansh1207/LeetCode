class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        vector<int>a;
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        long long sum =skill[i]+skill[j];
        while(i<j){
            if(skill[i]+skill[j]==sum){
                a.push_back(skill[i]*skill[j]);
                i++;
                j--;
            }else{
            return -1;
            }
            
        }
        long long ans=0;
        for(auto it:a){
            ans+=it;
            
        }
        return ans;


        
    }
};