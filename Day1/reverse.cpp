#include<stdio.h>
void reverse(int arr[], int n) {
     for(int i = 0; i < n / 2; i++) {
         int a = arr[i];
         arr[i] = arr[n-i-1];
         arr[n-i-1] = a;
     }
}
int main(){
     int n;
     scanf("%d", &n);
     int arr[n];
     for(int i = 0; i < n; i++){
          scanf("%d", &arr[i]);
     }
     printf("Before reversing: ");
     for(int i = 0; i < n; i++){
          printf("%d ", arr[i]);
     }
     reverse(arr, n);
     printf("\nAfter reversing: ");
     for(int i = 0; i < n; i++){
          printf("%d ", arr[i]);
     }
     return 0;
}