class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int n = strs.size();
        for(int i = 1; i < n; i++){
            int j = 0;
            for(j = 0; j < min(prefix.size(), strs[i].size()); j++){
                if(prefix[j] != strs[i][j]){
                    break;
                }
            }
            prefix = prefix.substr(0, j);
        }
        return prefix;
    }
};