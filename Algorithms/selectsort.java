import java.util.*;
public class selectsort{
     static void selectsort(int[] arr,int n){
          for(int i=0;i<n;i++){
               int min=arr[i];
               int idx=i;
               for(int j=i+1;j<n;j++){
                    if(arr[j]<min){
                         min=arr[j];
                         idx=j;
                    }
               }
               if(min!=arr[i]){
                    int temp=arr[i];
                    arr[i]=arr;
                    min=temp;
               }
          }
     }
     public static void main(String[] args){ 
          int[] arr={2,10,8,4,7,9};
          int n=arr.length;
          selectsort(arr,n);
          for(int i=0;i<n;i++){
               System.out.print(arr[i]+"\t");
          }
     }
}