class Solution {
    public int lengthOfLongestSubstring(String s) {
        int res=0,left=0;
        Map<Character,Integer>mp=new HashMap();
        char[] arr=s.toCharArray();
        if(arr.length==1 || arr.length==0)return arr.length;
        int right=0;
        for(;right<arr.length;right++){
            if(mp.containsKey(arr[right]) && mp.get(arr[right])>=left){
                res=Math.max(res,right-1-left+1);
                left=mp.get(arr[right])+1;

            }
            mp.put(arr[right],right);
        }
        return Math.max(res,right-1-left+1);
    }
}