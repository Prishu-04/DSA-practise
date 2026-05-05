class Solution {
    public String longestCommonPrefix(String[] strs) {
        String prefix=strs[0];
        int n=strs.length;
        int j;
        for(int i=1;i<n;i++){
            for(j = 0; j < Math.min(prefix.length(), strs[i].length()); j++){
                if(prefix.charAt(j)!=strs[i].charAt(j)){
                    break;
                }
            }
            prefix=prefix.substring(0,j);
        }
        return prefix;
    }
}