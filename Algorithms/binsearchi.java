import java.util.*;
public class binsearchi{
     public static void main(String[] args){
          int[] arr={1,2,3,4,8,10,12};
          int n=arr.length();
          Scanner sc=new Scanner(System.in);
          System.out.println("Enter the number:");
          int x=sc.nextInt();
          int l=0;u=n-1;
          while(l<=u){
               int mid=(u-l)/2 +l; //mid = (l+u)/2;
               if(arr[mid]<x){
                    l=mid+1;
               }else if(arr[mid]>x){
                    u=mid-1;
               }else{
                    System.out.println("Element found at index "+mid);
                    break;
               }
          }
     }
}