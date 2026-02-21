class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int p=0;
        for(int i=0;i<nums.size();i++){
            p^=nums[i];
        }
        return p;
    }
};