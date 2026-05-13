import java.util.*;
public class bubblesort{
     static void bubblesort(int arr[],int n){
          int temp=0;
          for(int i=0;i<n;i++){
               for(int j=0;j<n-i-1;j++){
                    if(arr[j]>arr[j+1]){
                         temp=arr[j];
                         arr[j]=arr[j+1];
                         arr[j+1]=temp;
                    }
               }
          }
     }
     public static void main(String[] args){
          int[] arr={2,10,8,4,7,9};
          int n=arr.length;
          bubblesort(arr,n);
          for(int i=0;i<n;i++){
               System.out.print(arr[i]+"\t");
          }
     }
}