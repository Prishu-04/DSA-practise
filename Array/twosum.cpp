class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int m=nums[i]+nums[i+1];
            if(m==target){
                res.push_back(i);
                res.push_back(i+1);
            }
        }
        return res;
    }
};