import java.util.*;
public class binsearchr{
     static int binsearch(int arr[],int l,int u,int x){
          while(l<=u){
               int mid=(l+u)/2;
               if(arr[mid]>x){
                    return binsearch(arr,l,mid-1,x);
               }else if(arr[mid]<x){
                    return binsearch(arr,mid+1,u,x);
               }else{
                    return mid;
               }
          }
          return -1;
     }
     public static void main(String[] args){
          Scanner sc=new Scanner(System.in);
          int[] arr={1,2,3,4,5,6};
          int n=arr.length;
          int x=5;
          int res=binsearch(arr,0,n-1,x);
          if(res==-1){
               System.out.println("Element not found");
          }else{
               System.out.println("Elements found at "+res);
          }
     }
}