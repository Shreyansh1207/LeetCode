class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        char[] arr=s.toCharArray();
        char[] arr1=p.toCharArray();
        int i=0;
        int j=0;
        int n=s.length();
        int n1=p.length();

        List<Integer>ans=new ArrayList<>();
       
        Map<Character,Integer>pmap=new HashMap<>();
        for(char it:arr1){
            pmap.put(it,pmap.getOrDefault(it,0)+1);
        }
        Map<Character,Integer>smap=new HashMap<>();
        while(j<n){
            smap.put(arr[j],smap.getOrDefault(arr[j],0)+1);
            while(j-i+1==n1){
                if(smap.equals(pmap)){
                    ans.add(i);
                }
                 smap.put(arr[i], smap.get(arr[i]) - 1);
                if (smap.get(arr[i]) == 0) {
                    smap.remove(arr[i]);
                }

                i++;
            }
            j++;
        }
        return ans;
    }
}