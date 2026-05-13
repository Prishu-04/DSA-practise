import java.util.*;
public class mergesort{ 
     static void merge(int arr[], int l, int m, int u) {
          int i = l, j = m + 1;
          int temp[] = new int[u + 1];
          int k = l;
          while (i <= m && j <= u) {
               if (arr[i] <= arr[j]) {
                    temp[k] = arr[i];
                    k++;
                    i++;
               } else {
                    temp[k] = arr[j];
                    k++;
                    j++;
               }
          }
          while (i <= m) {
               temp[k] = arr[i];
               k++;
               i++;
          }
          while (j <= u) {
               temp[k] = arr[j];
               k++;
               j++;
          }
          for (i = l; i <= u; i++) {
               arr[i] = temp[i];
          }
     }
     static void mergesort(int[] arr,int l,int u){ // used to divide the array
          if(l<u){
               int m=(l+u)/2;
               mergesort(arr,l,m);
               mergesort(arr,m+1,u);
               merge(arr,l,m,u);
          }
     }
     public static void main(String[] args){
          int[] arr={2,4,10,12,9,1,3,5};
          int n=arr.length;
          mergesort(arr,0,n-1);
          for(int i=0;i<n;i++){
               System.out.print(arr[i]+"\t");
          }
     }
}