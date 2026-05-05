class Solution {
    public int majorityElement(int[] nums) {
        int count=0,curr=0,n=nums.length;
        for(int i=0;i<n;i++){
            if(count==0){
                curr=nums[i];
            }
            count=count+(nums[i]==curr?1:-1);
        }
        return curr;
    }
}