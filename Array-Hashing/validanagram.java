class Solution {
    public boolean isAnagram(String s, String t) {
        char[] sa=s.toCharArray();
        char[] ta=t.toCharArray();
        if(sa.length!=ta.length) return false;
        Arrays.sort(sa);
        Arrays.sort(ta);
        int n=sa.length;
        for(int i=0;i<n;i++){
            if(sa[i]!=ta[i]){
                return false;
            }
        }
        return true;
    }
}