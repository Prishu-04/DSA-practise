#include<iostream>
#include<vector>
using namespace std;
int secondmax(vector<int>& nums,int n){
     int max1 = 0;
     int max2 = 0;
     for(int i=0;i<n;i++){
         if(nums[i] > max1){
             max2 = max1;
             max1 = nums[i];
         } else if(nums[i] > max2 && nums[i] <max1) {
             max2 = nums[i];
         }
         
     }
     return max2;
}
int main(){
     int n;
     cin>>n;
     vector<int> nums;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         nums.push_back(x);
     }
     int ans = secondmax(nums,n);
     cout<<ans<<endl;
     return 0;
}