// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>
int main() {
   
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
         printf("Enter the no in array\n");
    scanf("%d",&arr[i]);
    }
   // int max=-1;//  we will use -1  as a smallest number
   // int max=INT_MIN; // int go to -2^32 to 2^32-1 so INT_MIN =-2^32
   int max =arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf(" the maximum value out of all element in array:%d",max);

    return 0;
}