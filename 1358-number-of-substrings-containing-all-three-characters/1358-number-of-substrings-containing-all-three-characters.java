class Solution {
    public int numberOfSubstrings(String s) {
        
        int i=0;
        int ans=0;
        Map<Character,Integer>m=new HashMap<>();
        m.put('a',0);
        m.put('b',0);
        m.put('c',0);
        for(int j=0;j<s.length();j++){
            char ch = s.charAt(j);
            m.put(ch, m.get(ch) + 1);
            while(m.get('a')>0 && m.get('b')>0 && m.get('c')>0){
                 ans += s.length() - j;
                char leftChar = s.charAt(i);
                m.put(leftChar, m.get(leftChar) - 1);
                i++;
            }
        }
        return ans;
    }
}