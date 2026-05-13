import java.util.*;
public class insertionsort{
     static void insertionsort(int[] arr,int n){
          for(int i=1;i<n;i++){
               int key=arr[i];
               for(int j=i-1;j<=0;j--){
                    if(arr[j]>key){
                         arr[j+1]=arr[j];
                    }
                    arr[j+1]=key;
               }
          }
     }
     public static void main(String[] args){ 
          int[] arr={2,10,8,4,7,9};
          int n=arr.length;
          insertionsort(arr,n);
          for(int i=0;i<n;i++){
               System.out.print(arr[i]+"\t");
          }
     }
}