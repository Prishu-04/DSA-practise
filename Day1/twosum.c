int* twoSum(int* nums, int numsSize, int target,int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
     for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
               int m=nums[i]+nums[i+1];
               if(m==target){
                    result[0]=i;
                    result[1]=j;
               }
          }
     }
     return res;
}