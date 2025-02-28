class Solution {
public:
    string removeOuterParentheses(string s) {
        int front=0;
        int back=0;
        int sum=front+back;
        string ans="";
        if(s.size()==2){
            return ans;
        }
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                front++;
            }
            else{
                back++;
            }
            if(front==back){
                for (int j = i - (2 * front) + 2; j < i; j++) { 
                    ans.push_back(s[j]);
                }
                front=0;
                back=0;
            }
            i++;
        }
        return ans;
        
    }
};