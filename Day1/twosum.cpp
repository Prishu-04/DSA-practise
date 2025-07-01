#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(vector<int>& nums, int target){
     vector<int> ans;
     int n=nums.size();
     for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
               if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
               }
          }
     }
     return ans;
}
int main(){
     int n;
     cin>>n;
     vector<int> nums;
     cout<<"nums=";
     int x;
     for(int i=0;i<n;i++){
          cin>>x;
          nums.push_back(x);
     }
     int target;
     cout<<"target=";
     cin>>target;
     vector<int> ans=twosum(nums,target);
     cout<<"ans=";
     for(int i:ans){
          cout<<i<<" ";
     }
     return 0;
}