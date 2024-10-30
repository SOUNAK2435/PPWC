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
    
    
  
  int sum=0;
  for(int i=0;i<n;i++){
      sum +=arr[i];
  }
  printf(" sum of all number in array:%d",sum);
    return 0;
    
}