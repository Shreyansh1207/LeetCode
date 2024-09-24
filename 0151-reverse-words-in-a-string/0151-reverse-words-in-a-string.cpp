class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
       // int i=0;
        int j=0;
        string word="";
        int count=0;
        while(j<s.size()){
            
            while(j < s.size() && s[j] != ' '){
               word += s[j];
                j++;
            }
            reverse(word.begin(),word.end());
            if (!ans.empty()) {
                ans += " ";  // Add space between words
            }
            
            ans += word;  // Add reversed word to ans
            word = ""; 
           while (j < s.size() && s[j] == ' ') {
                j++;
            }

            // Move i to the next word start
          //  i = j;
        }
        return ans;
        
    }
};