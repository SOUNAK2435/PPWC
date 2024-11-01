// Online C compiler to run C program online
// Write a program to copy the contents of one array into another in reverse order
#include <stdio.h>

int main() {
    int arr[7]={56,45,64,32,55,76,34};
    int brr[7];
    for(int i=0;i<7;i++){ 
        brr[i]=arr[6-i];
        
    }
    printf("this is the first array\n");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    printf("this is the Second array\n ");
    for(int i=0;i<7;i++){
        printf("%d ",brr[i]);
        
    }
   

    return 0;
}

/*output
this is the first array
56 45 64 32 55 76 34 
this is the Second array
34 76 55 32 64 45 56 */