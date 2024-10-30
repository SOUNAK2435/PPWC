#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
         printf("Enter the no in array\n");
         scanf("%d",&arr[i]);
    }
    
    
  
  int product=1;
  for(int i=0;i<n;i++){
      product =product*arr[i];
  }
  printf(" product of all number in array:%d",product);
    return 0;
    
}