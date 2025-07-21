#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int val;
     cin>>val;
     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     bool found=false;
     for(int i=0;i<n;i++){
          if(arr[i]==val){
               found=true;
               break;
          }
     }
     if(found){
          cout<<"YES";
     } else{
          cout<<"NO";
     }
     return 0;
}